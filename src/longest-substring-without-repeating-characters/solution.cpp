#include <iostream>
#include <set>
using namespace std;
class Solution {
 public:
  int lengthOfLongestSubstring(string s) {
    set<char> sets;
    unsigned long max = 0;
    for (unsigned long i = 0; i < s.length(); i++) {
      sets.insert(s[i]);
      for (auto j = i + 1; j < s.length(); j++) {
        if (sets.count(s[j] == 0)) {
          sets.insert(s[j]);
        } else {
          cout << sets.size() << endl;
          max = (max < sets.size()) ? sets.size() : max;
          sets.clear();
          break;
        }
      }
    }
    return static_cast<int>(max);
  }
};

int main() {
  string s = "abcabcbb";
  Solution sol;
  cout << sol.lengthOfLongestSubstring(s) << endl;
};
