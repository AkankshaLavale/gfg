/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int getCount(Node* head) {
        // Code here
        int count = 0;
        
        Node*current=head;
        
        while(current!=0){
            count++;
            current=current->next;
            
        }
        
        
        return count ;
        
        
    }
};