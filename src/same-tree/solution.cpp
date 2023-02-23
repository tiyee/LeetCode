
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int log10(int n) {
  int count = 1;
  while (n > 9) {
    n /= 10;
    count++;
  }
  return count;
}
int pow10(int b) {
  if (b == 0) return 1;
  int x = 10;
  for (int i = 1; i < b; i++) x *= 10;
  return x;
}
int max(int a, int b) { return a < b ? b : a; }
int min(int a, int b) { return a > b ? b : a; }
bool compare(int a, int b) {
  if (a == b) return false;
  if (a == 0) return true;
  if (b == 0) return false;
  int la = log10(a);
  int lb = log10(b);

  if (la == lb) return a < b;

  int _max = max(a, b);
  int _min = min(a, b);
  bool a_is_max = _max == a;
  int gap = max(la, lb) - min(la, lb);
  int prefix = _max / pow10(gap);
  if (prefix != _min) {
    return a_is_max ? prefix < _min : _min < prefix;
  }

  int last = _max % pow10(gap);
  _max = last * pow10(log10(_min)) + _min;
  _min = max(a, b);
  return a_is_max ? _max < _min : _min < _max;
}
class Solution {
 public:
  string minNumber(vector<int>& nums) {
    sort(nums.begin(), nums.end(), compare);
    string ret;
    for (size_t i = 0; i < nums.size(); i++) ret += to_string(nums[i]);

    return ret;
  }
};
int main() {
  vector<int> nums = {0, 0, 34, 33, 11, 111, 12, 121};

  string ret = Solution().minNumber(nums);
  cout << ret << endl;
  return 0;
}
