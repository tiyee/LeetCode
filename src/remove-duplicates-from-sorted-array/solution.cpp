#include <vector>
using std::vector;
class Solution {
 public:
  int removeDuplicates(vector<int>& nums) {
    if (nums.size() < 2) return nums.size();
    size_t i = 0;
    for (size_t j = 1; j < nums.size(); j++)
      if (nums[j] > nums[i]) nums[++i] = nums[j];
    return ++i;
  }
};
