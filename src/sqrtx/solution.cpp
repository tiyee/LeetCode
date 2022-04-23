#include <vector>

using std::vector;
class Solution {
 public:
  int mySqrt(int x) {
    int i = 1;
    while (i * i < x) {
      i = (i + x / 2) / 2;
    }
  }
};
