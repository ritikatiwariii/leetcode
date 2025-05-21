/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
      ListNode* pre=NULL;
      ListNode* curr=head;
      ListNode* next1=NULL;
       while(curr!=NULL){
        next1=curr->next;
        curr->next=pre;
        pre=curr;
        curr=next1;
       } 
       return pre;
    }
};