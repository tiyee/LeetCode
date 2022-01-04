#include <algorithm>
#include <vector>
using std::swap;
using std::vector;
class Solution {
 public:
  void sortColors(vector<int>& nums) {
    int i = 0, left = -1, right = nums.size();
    while (i < right) {
      if (nums[i] == 0) {
        swap(nums[i++], nums[++left]);
      } else if (nums[i] == 2) {
        swap(nums[i], nums[--right]);
      } else {
        i++;
      }
    }
  }
};
