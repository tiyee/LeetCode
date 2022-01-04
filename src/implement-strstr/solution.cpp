#include <string>
using std::string;
class Solution {
 public:
  int strStr(string haystack, string needle) {
    size_t lh = haystack.size();
    size_t ln = needle.size();
    if (ln == 0) return 0;
    if (lh < ln) return -1;
    int pos = -1;
    for (size_t i = 0; i <= lh - ln; i++) {
      if (haystack[i] != needle[0]) {
        continue;
      }

      for (size_t j = 1; j < ln; j++) {
        if (haystack[i + j] != needle[j]) {
          goto lab;
        }
      }
      return i;
    lab:
      continue;
    }
    return pos;
  }
};
