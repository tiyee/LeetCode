#include <iostream>
#include <map>
#include <string>
#include <vector>
using std::cout;
using std::endl;
using std::map;
using std::string;
using std::vector;
class Solution {
 private:
 public:
  vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>> ret;
    map<string, vector<string>> m;
    for (auto i = 0; i < strs.size(); i++) {
      auto value = strs[i];
      string str;
      str.assign(value);
      sort(str.begin(), str.end());
      auto iter = m.find(str);
      if (iter != m.end()) {
        iter->second.push_back(value);
      } else {
        m[str] = vector<string>{value};
      }
    }

    for (auto iter = m.rbegin(); iter != m.rend(); iter++) {
      //      cout << iter->first << "  " << endl;
      //      for (auto const& v : iter->second) {
      //        cout << "-:" << v << "  " << endl;
      //      }
      ret.push_back(iter->second);
    }
    return ret;
  }
};
