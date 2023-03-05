
#include <stdio.h>

#include <algorithm>
#include <functional>
#include <vector>
using namespace std;
class Solution {
 public:
  vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> ret;
    size_t size = nums.size();
    if (size < 4) return ret;
    long _target = long(target);
    sort(nums.begin(), nums.end(), less<int>());
    for (size_t i = 0; i < size - 3; ++i) {
      if (nums[i] > target && target > 0) break;

      if (i > 0 && nums[i] == nums[i - 1]) continue;
      for (size_t j = size - 1; j > i + 2; j--) {
        if (long(nums[j]) * 4 < _target && target > 0) break;
        if (j < size - 1 && nums[j] == nums[j + 1]) continue;
        int left = i + 1;
        int right = j - 1;
        while (left < right) {
          long sum = long(nums[i]) + long(nums[left]) + long(nums[right]) +
                     long(nums[j]);
          if (sum == _target) {
            ret.push_back(
                vector<int>{nums[i], nums[left], nums[right], nums[j]});
            left++;
            right--;
            while (left < right && nums[left] == nums[left - 1]) left++;
            while (left < right && nums[right] == nums[right + 1]) right--;
          } else if (sum < _target) {
            left++;
          } else {
            right--;
          }
        }
      }
    }
    return ret;
  }
};
int main(int argc, char* argv[]) {
  vector<int> nums = {1, -2, -5, -4, -3, 3, 3, 5};
  int target = -11;
  auto ret = Solution().fourSum(nums, target);
  for (const auto& item : ret) {
    for (const auto& i : item) {
      printf("%d ", i);
    }
    printf("\n");
  }
  return 0;
}
