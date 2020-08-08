#include <iostream>

class Solution {
 private:
  bool isRadix(int left, int right, int square) {
    if (left > right) return false;
    int radix = (left + right) / 2;

    auto _square = radix * radix;
    if (_square == square) return true;
    if (_square < square) {
      return isRadix(radix + 1, right, square);
    } else {
      return isRadix(left, radix - 1, square);
    }
  }

 public:
  bool isPerfectSquare(int num) {
    if (num == 1) return true;
    if (num == 2) return false;
    if (num == 3) return false;
    return isRadix(1, num / 2 < 46340 ? num / 2 : 46340, num);
  }
};
