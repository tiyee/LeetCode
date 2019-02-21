
#include <vector>
using namespace std;
class Solution {
 public:
  int singleNumber(vector<int>& nums) {
    int a = 0;
    for (auto item : nums) {
      a ^= move(item);
    }

    return a;
  }
};
