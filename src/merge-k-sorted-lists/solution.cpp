/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <iostream>
#include <vector>
using namespace std;
struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
 public:
  ListNode* mergeKLists(vector<ListNode*>& lists) {
    auto l = lists.size();
    auto ret = new ListNode(0);
    auto curr = ret;
    auto sig = true;
    unsigned long min;
    while (sig) {
      sig = false;
      min = 0;
      for (unsigned i = 0; i < l; i++) {
        if (lists[i]) {
          min = (sig == false) ? i : min;
          sig = true;
          if (lists[i]->val < lists[min]->val) {
            min = i;
          }
        }
      }
      if (sig) {
        curr->next = new ListNode(lists[min]->val);
        curr = curr->next;
        lists[min] = lists[min]->next;
      }
    }
    return ret->next;
  }
};
int main() {
  vector<ListNode*> lists;
  auto x = new ListNode(0);

  for (unsigned long i = 0; i < 100; i++) {
    x = new ListNode(0);

    lists.push_back(x);

    for (unsigned long j = 1; j < 100; j++) {
      x->next = new ListNode(static_cast<int>(j));
      x = x->next;
    }
  }

  Solution sol;
  auto n = sol.mergeKLists(lists);
  while (n != nullptr) {
    cout << n->val << endl;
    n = n->next;
  }

  //  auto l = lists.size();
  //  for (unsigned long i = 0; i < l; i++) {
  //    auto x = lists[i];
  //    while (x != nullptr) {
  //      cout << x->val << endl;
  //      x = x->next;
  //    }
  //  }
  return 0;
}
