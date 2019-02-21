#include <iostream>
using namespace std;
class Solution {
 public:
  bool isPalindrome(int x) {
    int ori = x;
    if (x < 0) return false;
    long tmp = 0;
    while (x >= 10) {
      tmp = tmp * 10 + x % 10;
      x /= 10;
    }
    tmp = 10 * tmp + x;
    return static_cast<long>(ori) == tmp;
  }
};
int main() {
  Solution sol;
  if (sol.isPalindrome(121)) {
    cout << 1 << endl;
  } else {
    cout << 0 << endl;
  }

  return 0;
}
