#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
 public:
  vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++) {
      auto got = m.find(target - nums[i]);
      if (got == m.end()) {
        m[nums[i]] = i;
      } else {
        return vector<int>{got->second, i};
      }
    }
    return vector<int>{-1, -1};
  }
};
