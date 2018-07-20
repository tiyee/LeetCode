#include "src/single-element-in-a-sorted-array/solution.cpp"
#include <iostream>
#include <vector>
using namespace std;
// int main() {
//  auto sol = Solution();
//  auto nums = vector<int>{0, -9, -5};
//  auto x = sol.maxProduct(nums);
//  cout << x << endl;
//  return 0;
//}
int main() {

  auto sol = Solution();
  auto nums = vector<int>{0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 8, 8, 10};
  cout << sol.singleNonDuplicate(nums) << endl;

  return 0;
}

void render(std::string &x) { cout << x << endl; }
void render(vector<int> &nums) {
  auto print = [](const int &n) { std::cout << n << endl; };
  std::for_each(nums.begin(), nums.end(), print);
}
