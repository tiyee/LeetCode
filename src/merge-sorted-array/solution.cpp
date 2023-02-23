
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int max(int a, int b) { return a >= b ? a : b; }
class Solution {
 public:
  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    size_t idx = m + n - 1;
    while (m > 0 || n > 0) {
      if (m == 0) {
        nums1[idx--] = nums2[--n];
      } else if (n == 0) {
        nums1[idx--] = nums1[--m];
      } else {
        nums1[idx--] = nums1[m - 1] >= nums2[n - 1] ? nums1[--m] : nums2[--n];
      }
    }
  }
};
int main() {
  vector<int> nums1 = {1, 2, 3, 0, 0, 0};
  int m = 3;
  vector<int> nums2 = {2, 5, 6};
  int n = 3;
  Solution().merge(nums1, m, nums2, n);
  for (size_t i = 0; i < nums1.size(); i++) std::cout << nums1[i] << std::endl;
  return 0;
}
