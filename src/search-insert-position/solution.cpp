#include <vector>
using std::vector;
class Solution {
 public:
  int searchInsert(vector<int>& nums, int target) {
    size_t start = 0;
    size_t end = nums.size() - 1;

    while (end - start > 1) {
      size_t mid = (end + start) / 2;
      if (target == nums[mid]) {
        return mid;
      }
      if (target < nums[mid]) {
        end = mid;
      }
      if (target > nums[mid]) {
        start = mid;
      }
    }
    if (nums[start] < target && target < nums[end]) return start + 1;
    if (target > nums[end]) return end + 1;
    if (target <= nums[start]) return start;
    if (target == nums[end]) return end;
    return -1;
  }
};
