#include <iostream>
#include <vector>
using namespace std;

class Solution {
 public:
  vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> ret(2, 0);
    for (unsigned long i = 0; i < nums.size(); i++) {
      for (unsigned long j = i + 1; j < nums.size(); j++) {
        if (nums[i] + nums[j] == target) {
          ret[0] = static_cast<int>(i);
          ret[1] = static_cast<int>(j);
          return ret;
        }
      }
    }
    return ret;
  }
};
