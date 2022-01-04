#include <algorithm>
#include <vector>
using std::max;
using std::vector;
class Solution {
 public:
  int maxSubArray(vector<int>& nums) {
    if (nums.size() == 1) return nums[0];
    int res = nums[0];
    int sum = nums[0];
    for (size_t i = 1; i < nums.size(); i++) {
      if (sum < 0)
        sum = nums[i];
      else
        sum += nums[i];
      res = res > sum ? res : sum;
    }
    return res;
  }
};
