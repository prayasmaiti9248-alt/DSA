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
    ListNode* deleteDuplicates(ListNode* head) {
       ListNode* temp=head;
       while(head && temp->next!=NULL){
        ListNode* n=temp->next;
        if(n->val==temp->val){
            temp->next=n->next;
        }
        else{
         temp=temp->next;
        }
       }
       return head;
    }
};