#include <iostream>
#include <set>
using namespace std;
class Solution {
 public:
  int lengthOfLongestSubstring(string s) {
    set<char> sets;
    unsigned long max = s.length() == 0 ? 0 : 1;
    for (unsigned long i = 0; i < s.length(); i++) {
      sets.insert(s[i]);
      for (auto j = i + 1; j < s.length(); j++) {
        if (sets.count(s[j]) == 0) {
          sets.insert(s[j]);
          max = (max < sets.size()) ? sets.size() : max;
        } else {
          sets.clear();
          break;
        }
      }
    }
    return static_cast<int>(max);
  }
};

int main() {
  string s = "bbb";
  Solution sol;
  cout << sol.lengthOfLongestSubstring(s) << endl;
};
