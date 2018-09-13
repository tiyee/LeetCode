#include <iostream>
#include <vector>
using std::vector;
class Solution {
private:
  long binarySearch(vector<int> &nums, int target, unsigned long start,
                    unsigned long stop) {
    if (start >= stop) {
      return -1;
    }
    if (nums[start] == target) {
      return long(start);
    }
    if (nums[stop] == target) {
      return long(stop);
    }
    unsigned long mid = (start + stop) / 2;
    if (nums[mid] == target) {
      return long(mid);
    }
    if (target < nums[mid]) {
      return binarySearch(nums, target, start + 1, mid - 1);
    } else {
      return binarySearch(nums, target, mid + 1, stop - 1);
    }
  }

public:
  vector<int> searchRange(vector<int> &nums, int target) {
    if (nums.size() < 1) {
      return vector<int>{-1, -1};
    }
    if (target < nums[0] || target > nums.back()) {
      return vector<int>{-1, -1};
    }
    if (nums.size() == 1 && nums[0] == target) {
      return vector<int>{0, 0};
    }
    auto find = binarySearch(nums, target, 0, nums.size() - 1);
    if (find == -1) {
      return vector<int>{-1, -1};
    }
    long i;
    auto start = static_cast<unsigned long>(find);
    auto stop = static_cast<unsigned long>(find);
    for (i = find; i >= 0; i--) {
      if (nums[static_cast<unsigned long>(i)] == target) {
        start = static_cast<unsigned long>(i);
      }
    }
    for (i = find; static_cast<unsigned long>(i) < nums.size(); i++) {
      if (nums[static_cast<unsigned long>(i)] == target) {
        stop = static_cast<unsigned long>(i);
      }
    }

    return vector<int>{int(start), int(stop)};
  }
};
