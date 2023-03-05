/**
字符          数值
I             1
V             5
X             10
L             50
C             100
D             500
M             1000

来源：力扣（LeetCode）
        链接：https://leetcode.cn/problems/integer-to-roman
                      著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
**/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
 public:
  string intToRoman(int num) {
    vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    vector<string> symbols = {"M",  "CM", "D",  "CD", "C",  "XC", "L",
                              "XL", "X",  "IX", "V",  "IV", "I"};
    string ret = "";
    for (size_t i = 0; i < 13; i++) {
      while (num >= values[i]) {
        num -= values[i];
        ret += symbols[i];
      }
      if (num == 0) {
        break;
      }
    }
    return ret;
  }
};
int main() {
  int num = 4;
  std::cout << Solution().intToRoman(num) << std::endl;

  return 0;
}
