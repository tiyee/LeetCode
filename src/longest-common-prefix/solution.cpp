#include <string>
#include <vector>
using std::string;
using std::vector;
class Solution {
 public:
  string longestCommonPrefix(vector<string>& strs) {
    if (strs.size() == 0) return "";
    size_t i = 0;
    char tmp = '\0';
    while (true) {
      tmp = '\0';
      for (const string& str : strs) {
        if (i == str.size()) {
          goto ret;
        }
        if (tmp == '\0') {
          tmp = str[i];
        } else if (tmp != str[i]) {
          goto ret;
        }
      }
      i++;
    }

  ret:
    if (i == 0) return "";
    return strs[0].substr(0, i);
  }
};
