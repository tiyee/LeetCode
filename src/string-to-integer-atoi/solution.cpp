#include <iostream>
using namespace std;
class Solution {
 private:
  int toNumber(char x) {
    if (x < '0' || x > '9') return -1;
    return x - '0';
  }

 public:
  int myAtoi(string& str) {
    int n = 0;
    for (unsigned long i = 0; i < str.length(); ++i) {
      if (n == 0) {
        if (s[i] != ' ') {
          continue;
        }
        if (s[i] == '+') {
          continue;
        }
        if (s[i] == '-') {
          n = -1;
        }
      } else {
        auto j = toNumber(s[i]);
      }
    }
  }
};
