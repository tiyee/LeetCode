#include<iostream>
using std::cout;
using std::endl;
 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(nullptr) {}
  } ;



class Solution {
private:
    ListNode*  insertion(ListNode* head,ListNode* item) {
        if(item->val<head->val) {
            item->next = head;
            // cout<<"indert 1:"<<item->val<<endl;
            return item;
        }
        auto tmp = head;
        while (tmp != nullptr) {
            if(tmp->next == nullptr || tmp->next->val > item->val){
                break;
            }
            tmp = tmp->next;
        }

        item->next = tmp->next;
        tmp->next = item;
      //   cout<<"indert"<<item->val<<endl;
         return head;

    }
public:
    ListNode* sortList(ListNode* head) {


        if(head->next == nullptr) {
            return head;
        }
        auto newHead = new ListNode(head->val);
        auto tmp = head->next;
        while (tmp != nullptr) {
            auto waiting = tmp;
            tmp=tmp->next;
            newHead = insertion(newHead,waiting);
        }
        return newHead;
    }
};
