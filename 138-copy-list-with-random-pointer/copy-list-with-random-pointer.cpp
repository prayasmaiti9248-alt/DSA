/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == nullptr) return nullptr; 
      Node* newhead= new Node(head->val);
      Node* ot=head->next;
      Node* nt=newhead;
      unordered_map<Node*,Node*> m;
      m[head]=newhead;
      while(ot!=NULL){
        Node* copy=new Node(ot->val);
        m[ot]=copy;
        nt->next=copy;
        nt=nt->next;
        ot=ot->next;
      }
      ot=head;
      nt=newhead;
      while(ot!=NULL){
        nt->random=m[ot->random];
        ot=ot->next;
        nt=nt->next;
      }
      return newhead;
    }
};