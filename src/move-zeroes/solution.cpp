#include <vector>
using std::vector;
class Solution {
 public:
  void moveZeroes(vector<int>& nums) {
    size_t i = 0;
    size_t j = 1;
    while (i < nums.size() - 1) {
      if (nums[i] == 0) {
        while (j < nums.size()) {
          if (nums[j] != 0) {
            nums[i] = nums[j];
            nums[j] = 0;
            break;
          }
          j += 1;
        }
      }
      i++;
      j++;
    }
  }
};
