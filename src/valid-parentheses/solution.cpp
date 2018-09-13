#include <iostream>
#include <stack>
using std::cout;
using std::endl;
using std::stack;
using std::string;

class Solution {
private:
  bool match(const char a, const char b) {
    switch (a) {
    case '{':
      return b == '}';
    case '(':
      return b == ')';
    case '[':
      return b == ']';
    }
    return false;
  }
  void coupleRemove(stack<char> &st, char curr) {

    if (st.empty() || !match(st.top(), curr)) {
      st.push(curr);
      return;
    }
    if (match(st.top(), curr)) {
      st.pop();
      return;
    }
  }

public:
  bool isValid(string s) {
    auto l = s.size();
    if (l == 0)
      return true;
    if (l == 1)
      return false;
    stack<char> st;
    for (unsigned long i = 0; i < l; i++) {
      coupleRemove(st, s[i]);
    }
    return st.size() == 0;
  }
};
