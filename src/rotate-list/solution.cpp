/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(nullptr) {}
};
class Solution {
 public:
  ListNode* rotateRight(ListNode* head, int k) {
    ListNode* first = head;
    ListNode* last = head;

    while (last->next) {
      last = last->next;
    }
    last->next = first;
  }
};
