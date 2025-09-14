/*
class Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */

class Solution {
  public:
    int getMiddle(Node* head) {
        // code here
        Node*slow=head;
        Node*fast=head;
        
        while(fast&&fast->next){
            
            slow=slow->next;
            fast=fast->next->next;
            
        }

        return slow->data;
    }
};