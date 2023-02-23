#include <iostream>
#include <vector>

#include "src/merge-sorted-array/solution.cpp"
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
  run();
  return 0;
}
