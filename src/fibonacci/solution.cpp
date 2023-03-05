#include <cmath>
#include <iostream>
class Solution {
 public:
  /**
   * @param n: an integer
   * @return: an ineger f(n)
   */
  int fibonacci(int n) {
    if (n < 3) return n - 1;
    n -= 2;
    int a = 0;
    int b = 1;
    int c = 1;
    while (n--) {
      c = a + b;
      a = b;
      b = c;
    }
    return c;
  }
  int fab(int n) {
    if (n < 3) return n - 1;
    auto a1 = std::pow((1 + std::sqrt(5.0)) / 2, n);
    auto a2 = std::pow((1 - std::sqrt(5.0)) / 2, n);
    auto x = (1 / std::sqrt(5.0)) * (a1 - a2);

    return int(x);
  }
};

int main() {
  for (int i = 1; i < 30; i++) {
    Solution().fab(i);
  }

  return 0;
}
