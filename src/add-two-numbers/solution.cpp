/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <vector>
using std::vector;
struct ListNode {
  long val;
  ListNode *next;
  ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    vector<unsigned short> arr;
    unsigned short sum;
    for (;;) {
      sum = 0;
      if (l1 != nullptr) {
        sum += l1->val;
        l1 = l1->next;
      }
      if (l2 != nullptr) {
        sum += l2->val;
        l2 = l2->next;
      }
      arr.push_back(sum);

      if (l1 == nullptr && l2 == nullptr) {

        break;
      }
    }
    ListNode *nl = new ListNode(0);
    ListNode *last = new ListNode(0);
    ListNode *current;
    last->next = nl;
    unsigned short sep = 0;
    for (unsigned long i = 0; i < arr.size(); ++i) {
      current = new ListNode(0);
      if (arr[i] + sep > 9) {
        current->val = arr[i] + sep - 10;
        sep = 1;
      } else {
        current->val = arr[i] + sep;
        sep = 0;
      }

      last->next->next = current;
      last->next = current;
    }
    if (sep == 1) {
      last->val = 1;
      last->next->next = last;
      last->next->next->next = nullptr;
    }
    return nl->next;
  }
};
