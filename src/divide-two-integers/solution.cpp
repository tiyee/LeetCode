#include <limits.h>
class Solution {
public:
  int divide(int dividend, int divisor) {
    short sep = 1;
    long m = static_cast<long>(dividend);
    long n = static_cast<long>(divisor);
    if (m < 0) {
      sep = 0 - sep;
      m = 0 - m;
    }
    if (n < 0) {
      sep = 0 - sep;
      n = 0 - n;
    }
    long i = 0;

    while (m >= n) {
      m -= n;
      i++;
    }
    if (sep < 0) {
      i = 0 - i;
    }
    if (i > INT_MAX) {
      return INT_MAX;
    }
    if (i < INT_MIN) {
      return INT_MAX;
    }
    return static_cast<int>(i);
  }
  int divide2(int dividend, int divisor) {
    if (dividend == divisor)
      return 1;
    int r = 1;
    while (dividend > divisor) {
      divisor += divisor;
      r += r;
    }
  }
};
