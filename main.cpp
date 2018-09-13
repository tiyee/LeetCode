#include "src/valid-parentheses/solution.cpp"
#include <iostream>
#include <vector>
using namespace std;

int main() {

  auto sol = Solution();

  cout << sol.isValid("{}([{}])[]") << endl;

  return 0;
}

void render(std::string &x) { cout << x << endl; }
void render(vector<int> &nums) {
  auto print = [](const int &n) { std::cout << n << endl; };
  std::for_each(nums.begin(), nums.end(), print);
}
