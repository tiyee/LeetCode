#include <vector>

class Solution {
 public:
  int mySqrt(int x) {
    if (x < 2) {
      return x;
    }
    int left = 0, right = x, i;
    while (left + 1 < right) {
      int i = (left + right) / 2;
      if (x / i < i) {
        right = i;
      } else {
        left = i;
      }
    }
    return left;
  }
};
