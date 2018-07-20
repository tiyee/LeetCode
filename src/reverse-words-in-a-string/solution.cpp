#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;
class Solution {
private:
  vector<char> m_ss;
  void render(vector<char> *st) {
    while (!st->empty()) {
      m_ss.push_back(st->back());
      st->pop_back();
    }
    m_ss.push_back(' ');
  }

public:
  void reverseWords(string &s) {
    vector<char> vct;
    auto l = s.size();
    auto isFisrt = true;
    for (unsigned long i = 0; i < l; i++) {
      auto index = l - 1 - i;
      if (isFisrt && s[index] == ' ') {
        continue;
      }
      isFisrt = false;
      if (s[index] != ' ') {
        vct.push_back(s[index]);

      } else if (vct.size() > 0) {
        render(&vct);
      }
    }
    if (!vct.empty()) {
      render(&vct);
    }
    // cout << m_ss.size() << endl;
    s.clear();
    if (m_ss.empty())
      return;
    for (unsigned i = 0; i < m_ss.size() - 1; i++) {
      s.push_back(m_ss[i]);
    }
    cout << s << endl;
  }
};
