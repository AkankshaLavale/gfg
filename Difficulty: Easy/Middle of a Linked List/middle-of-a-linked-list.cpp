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
        int count=0;
        Node*temp=head;
        while(temp){
            count++;
            temp=temp->next;
        }
        
        count/=2;
        temp=head;
        while(count--){
            temp=temp->next;
            
        }
        return temp->data;
    }
};