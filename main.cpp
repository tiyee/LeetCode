#include <iostream>
#include <vector>

#include "src/lru-cache/solution.cpp"
using namespace std;

int main() {
  LRUCache *obj = new LRUCache(10);
  int param_1 = obj->get(1);
  obj->put(1, 2);
  return 0;
}

void render(std::string &x) { cout << x << endl; }
void render(vector<int> &nums) {
  auto print = [](const int &n) { std::cout << n << endl; };
  std::for_each(nums.begin(), nums.end(), print);
}
z
