#include <iostream>
using namespace std;
class Solution {
 private:
  char get(const string &s, unsigned long index, int forward) {
    return index % 2 == 0 ? s[index / 2] : s[(index + forward) / 2];
  }

 public:
  string longestPalindrome(const string &s) {
    auto l = s.length();
    unsigned long max = 0;
    unsigned long center = 0;
    for (unsigned long i = 0; i < l * 2; i++) {
      unsigned long step = 1;
      unsigned long n = 0;
      while (step <= i && i + step < 2 * l) {
        if (get(s, i - step, -1) != get(s, i + step, 1)) {
          break;
        }
        if (max < step) {
          max = step;
          center = i;
        }

        ++step;
      }
    }

    // cout << (center - max) / 2 << " " << max << " " << s.size() << endl;
    return s.substr((center - max) / 2, max + 1);
  }
};

int main() {
  Solution sol;
  cout << sol.longestPalindrome("bbb") << endl;

  return 0;
}
