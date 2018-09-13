#include "string"
#include <climits>
#include <iostream>
namespace strtoi {
using std::cout;
using std::endl;
using std::string;
class Solution {
private:
  bool is_number(int x) { return x >= '0' && x <= '9'; }

public:
  int myAtoi(string str) {
    unsigned long l = str.length();
    bool hasFirst = false;
    unsigned i;
    long sum = 0;
    long sep = 1;
    for (i = 0; i < l; i++) {
      if (sum * sep >= INT_MAX) {
        return INT_MAX;
      }
      if (sum * sep <= INT_MIN) {
        return INT_MIN;
      }

      if (hasFirst) {
        if (!is_number(str[i])) {
          break;
        } else {
          sum = 10 * sum + str[i] - 48;
        }
      } else {
        if (str[i] == ' ') {
          continue;
        }
        if (str[i] == '-') {
          sep *= -1;
          hasFirst = true;
          continue;
        }
        if (str[i] == '+') {
          sep *= 1;
          hasFirst = true;
          continue;
        }
        if (!is_number(str[i])) {
          return 0;
        } else {
          sum = 10 * sum + str[i] - 48;
          hasFirst = true;
        }
      }
    }
    sum *= sep;
    if (sum < INT_MIN) {
      return INT_MIN;
    }
    if (sum > INT_MAX) {
      return INT_MAX;
    }
    return int(sum);
  }
};
} // namespace strtoi
