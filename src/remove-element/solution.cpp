#include <algorithm>
#include <vector>
using std::vector;
class Solution {
 public:
  int removeElement(vector<int>& nums, int val) {
    int n = nums.size();
    if (n == 0) return 0;
    if (n == 1) {
      return nums[0] == val ? 0 : 1;
    }
    int i = 0;
    int j = n - 1;
    while (i < j) {
      if (nums[i] != val) {
        i++;
        continue;
      }
      if (j >= 0 && nums[j] == val) {
        j--;

        continue;
      }
      std::swap(nums[i], nums[j]);
      i++;
    }
    i = 0;
    for (i = 0; i < n; ++i) {
      if (nums[i] == val) {
        return i;
      }
    }

    return i;
  }
};
