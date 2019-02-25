#include <iostream>
#include <limits>
using namespace std;
class Solution {
 private:
  int toNumber(char x) {
    if (x < '0' || x > '9') return -1;
    return x - '0';
  }
  int raise(long ret) {
    if (ret < INT_MIN) return INT_MIN;
    if (ret > INT_MAX) return INT_MAX;
    return static_cast<int>(ret);
  }

 public:
  int myAtoi(string s) {
    bool bBegin = false;
    long n = 0;
    int sep = 1;

    for (auto item : s) {
      if (!bBegin && item == ' ') continue;
      if (!bBegin) {
        if (item == '-') {
          sep *= -1;
          bBegin = true;

        } else if (item == '+') {
          bBegin = true;

        } else if (toNumber(item) == -1) {
          return false;
        } else {
          n = toNumber(item);
          bBegin = true;
        }

      } else {
        auto j = toNumber(item);
        if (j == -1) return raise(n * sep);
        n = (n * 10) + j;
        if (n > INT_MAX) break;
      }
    }
    return raise(n * sep);
  }
};
int main() {
  Solution sol;

  cout << sol.myAtoi("  -0012a42") << endl;
}
