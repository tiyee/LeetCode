#include <iostream>
#include <vector>
using std::vector;
class Solution {
 private:
  int get(vector<int>& nums1, vector<int>& nums2, size_t m, size_t n,
          size_t i) {
    if (i > m + n - 1) return -1;
    if (i < m) {
      return nums1[i];
    } else {
      return nums2[i - m];
    }
  }
  void set(vector<int>& nums1, vector<int>& nums2, size_t m, size_t n, size_t i,
           int val) {
    if (i > m + n - 1) return;
    if (i < m) {
      nums1[i] = val;
    } else {
      nums2[i - m] = val;
    }
  }
  void Qsort(vector<int>& nums1, vector<int>& nums2, size_t m, size_t n,
             int low, int high) {
    if (high <= low) return;
    int i = low;
    int j = high + 1;
    int key = get(nums1, nums2, m, n, low);
    while (true) {
      while (get(nums1, nums2, m, n, ++i) < key) {
        if (i == high) {
          break;
        }
      }
      while (get(nums1, nums2, m, n, --j) > key) {
        if (j == low) {
          break;
        }
      }
      if (i >= j) break;
      int temp = get(nums1, nums2, m, n, i);
      set(nums1, nums2, m, n, i, get(nums1, nums2, m, n, j));
      set(nums1, nums2, m, n, j, temp);
    }
    set(nums1, nums2, m, n, low, get(nums1, nums2, m, n, j));

    set(nums1, nums2, m, n, j, key);
    Qsort(nums1, nums2, m, n, low, j - 1);
    Qsort(nums1, nums2, m, n, j + 1, high);
  }

 public:
  double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    size_t m = nums1.size();
    size_t n = nums2.size();
    size_t l = m + n;
    Qsort(nums1, nums2, m, n, 0, m + n - 1);
    return (get(nums1, nums2, m, n, (l - 1) / 2) +
            get(nums1, nums2, m, n, l / 2)) /
           2.0;
  }
  void test(vector<int>& nums1, vector<int>& nums2) {
    size_t m = nums1.size();
    size_t n = nums2.size();
    Qsort(nums1, nums2, m, n, 0, m + n - 1);
  }
};
