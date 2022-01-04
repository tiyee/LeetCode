
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
};
