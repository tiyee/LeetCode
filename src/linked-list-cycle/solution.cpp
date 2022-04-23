#include <algorithm>
#include <string>
#include <vector>
using std::string;
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(nullptr) {}
};
using std::vector;
class Solution {
 public:
  bool hasCycle(ListNode *head) {
    ListNode *fast = head;
    ListNode *slow = head;
    while (fast != nullptr && fast->next != nullptr) {
      slow = slow->next;
      fast = fast->next->next;
      if (fast == slow) return true;
    }
    return false;
  }
};
