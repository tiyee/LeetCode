#include <array>
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
class Solution {
public:
  int maxProduct(vector<int> &nums) {
    long max = static_cast<long>(nums[0]);
    auto l = nums.size();
    for (unsigned long i = 0; i < l; i++) {
      for (unsigned long j = i; j < l; j++) {
        long produce = static_cast<long>(arr[i]);
        for (unsigned long m = i + 1; m <= j; m++) {
          produce *= arr[m];
        }
      }
    }
  }
};
