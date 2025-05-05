/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
//    ListNode* finds(ListNode* head){
//        ListNode* slow=head;
//       ListNode* fast=head->next;
//         while(fast->next!=NULL){
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         return slow;
//     }
    
    bool hasCycle(ListNode *head) {
        // if(head==NULL || head->next==NULL){
        //     return false;
        // }
        // ListNode* ans=finds(head);
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){

            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                   return true;
            }
           
           
        }
        
            return false;
        
    }
};