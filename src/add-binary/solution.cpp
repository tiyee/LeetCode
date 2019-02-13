#include <iostream>
#include <string>
using namespace std;
class Solution {
 private:
  unsigned short find(string& s, unsigned long pos, unsigned long max) {
    if (s.length() == 0) return 0;
    if (pos < max - s.length()) return 0;
    return s[pos - (max - s.length())] == '1' ? 1 : 0;
  }

 public:
  string addBinary(string a, string b) {
    auto maxLength = a.length() > b.length() ? a.length() : b.length();
    string c(maxLength + 1, '0');
    unsigned short carry = 0;
    for (unsigned long i = 0; i < maxLength; i++) {
      unsigned short sum = find(a, maxLength - 1 - i, maxLength) +
                           find(b, maxLength - 1 - i, maxLength) + carry;
      switch (sum) {
        case 0:
          c[maxLength - i] = '0';
          carry = 0;
          break;
        case 1:

          c[maxLength - i] = '1';
          carry = 0;
          break;

        case 2:
          carry = 1;
          c[maxLength - i] = '0';
          break;
        case 3:
          carry = 1;
          c[maxLength - i] = '1';
      }
    }

    switch (carry) {
      case 0:
        return c.substr(1, maxLength);
      case 1:
        c[0] = '1';
        return c;
      default:
        return "";
    }
  }
};

int main() {
  auto sol = Solution();

  cout << sol.addBinary("1111111111111111111111", "1") << endl;

  return 0;
}
