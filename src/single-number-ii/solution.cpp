#include <iostream>
#include <vector>
using namespace std;
class Solution {
 public:
  int singleNumber(vector<int>& nums) {
    auto l = nums.size();
    if (l == 1) return nums[0];
    if (l < 4) return -1;
    sort(nums.begin(), nums.end());
    if (nums[0] < nums[1]) return nums[0];
    if (nums[l - 1] > nums[l - 2]) return nums[l - 1];

    for (unsigned long i = 1; i < l - 1; ++i) {
      if (nums[i] > nums[i - 1] && nums[i] < nums[i + 1]) {
        return nums[i];
      }
    }
    return -1;
  }
};
int main() {
  vector<int> mock;
  mock.push_back(2);
  mock.push_back(2);
  mock.push_back(2);
  mock.push_back(1);

  Solution so;
  auto ret = so.singleNumber(mock);
  cout << ret << endl;
  return 0;
}
