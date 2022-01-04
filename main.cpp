#include <iostream>
#include <vector>

#include "src/longest-common-prefix/solution.cpp"
using namespace std;
void render(int x) { cout << x << endl; }
void render(double x) { cout << x << endl; }
void render(std::string &x) { cout << x << endl; }
void render(vector<int> nums) {
  auto print = [](const int &n) { std::cout << n << ", "; };
  std::for_each(nums.begin(), nums.end(), print);
  std::cout << " " << std::endl;
}

int main() {
  auto sl = Solution();
  vector<string> strs = {"flower", "flow", "flight"};

  auto s = sl.longestCommonPrefix(strs);
  render(s);
  return 0;
}
