#include <iostream>
#include <vector>
using std::vector;
class Solution {
private:
  int bSearch(vector<int> &nums, unsigned long start, unsigned long end) {

    // std::cout << start << " " << end << std::endl;
    auto index = (start + end) / 2 * 2;
    if (start == end)
      return nums[index];

    if (nums[index] == nums[index + 1]) {
      return bSearch(nums, start + 1, end);
    }
    if (nums[index] == nums[index - 1]) {
      return bSearch(nums, start, end - 1);
    }
    return nums[index];
  }

public:
  int singleNonDuplicate(vector<int> &nums) {
    auto size = nums.size();
    if (size == 0)
      return -1;
    if (size == 1)
      return nums[0];
    if (nums[size - 1] != nums[size - 2]) {
      return nums[size - 1];
    }
    if (nums[0] != nums[1]) {
      return nums[0];
    }
    return bSearch(nums, 0, size / 2);
  }
};
