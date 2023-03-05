
#include <stdio.h>

#include <algorithm>
#include <functional>
#include <vector>
using namespace std;
class Solution {
 public:
  vector<vector<int>> threeSum(vector<int>& nums) {
    auto size = nums.size();
    vector<vector<int>> result;
    if (size < 3) return result;
    sort(nums.begin(), nums.end(), less<int>());
    for (size_t i = 0; i < nums.size(); ++i) {
      if (nums[i] > 0) break;
      if (i > 0 && nums[i] == nums[i - 1]) {
        continue;
      }
      auto left = i + 1;
      auto right = nums.size() - 1;
      while (left < right) {
        int sum = nums[i] + nums[left] + nums[right];
        if (sum < 0) {
          left++;
        } else if (sum > 0) {
          right--;

        } else {
          result.push_back(vector<int>{nums[i], nums[left], nums[right]});

          left++;
          right--;
          while (left < right && nums[left] == nums[left - 1]) left++;
          while (left < right && nums[right] == nums[right + 1]) right--;
        }
      }
    }
    return result;
  }
};
int main(int argc, char* argv[]) {
  vector<int> nums = {0, 0, 0, 0, 0, 0};
  auto ret = Solution().threeSum(nums);
  for (const auto& item : ret) {
    for (const auto& i : item) {
      printf("%d ", i);
    }
    printf("\n");
  }
  return 0;
}
