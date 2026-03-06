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
void deletenode(ListNode*& head, int pos){
    if(pos==1){
         ListNode* temp = head; 
         head = head->next; 
         delete temp; 
         return;
    }
    ListNode* cur=head;
    ListNode* prev=NULL;
    int s=1;
    while(cur!=NULL&&s<pos){
        prev=cur;
        cur=cur->next;
        s++;
    }
    if(cur==NULL){
        return;
    }
    prev->next=cur->next;
    delete cur;

}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL){
            return head;
        }
        ListNode* temp=head;
        int s=1;
        while(temp->next!=NULL){
            s++;
            temp=temp->next;
        }
        int pos=s-n+1;
        deletenode(head,pos);
        return head;
    }
};