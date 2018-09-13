#include <limits.h>

namespace reverseinteger {

class Solution {
private:
  int check(long x) {
    if (x > INT_MAX) {
      return 0;
    } else if (x < INT_MIN) {
      return 0;
    }
    return int(x);
  }

public:
  int reverse(int x) {
    int sep;
    if (x >= 0) {
      sep = 1;

    } else {
      sep = -1;
      x *= sep;
    }
    x = check(x);
    long sum = 0;
    while (x > 0) {
      if (sum > INT_MAX / 10.0) {
        return 0;
      } else if (10 * sum > INT_MAX - x % 10) {
        return 0;
      }
      sum = 10 * sum + x % 10;

      x /= 10;
    }

    return check(sep * sum);
  }
};
} // namespace reverseinteger
