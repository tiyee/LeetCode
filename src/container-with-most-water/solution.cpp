
#include <vector>

using namespace std;
int max(int a, int b) { return a > b ? a : b; }
int min(int a, int b) { return a < b ? a : b; }
class Solution {
 public:
  int maxArea(vector<int>& height) {
    int left = 0;
    int right = height.size();
    int aus = 0;
    while (left < right) {
      aus = max(aus, (right - left) * min(height[left], height[right]));
      if (height[left] > height[right]) {
        right--;
      } else {
        left++;
      }
    }
    return aus;
  }
};
