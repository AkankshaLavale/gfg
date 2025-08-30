/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

// Function to insert a node in the middle of the linked list.
class Solution {
  public:
    Node *insertInMiddle(Node *head, int x) {
        // Code Here
        Node*newnode=new Node(x);
        
        if(head==NULL){
            return newnode;
        }
        
        int count=0;
        Node*temp=head;
       
        while(temp!=NULL){
            count++;
            temp=temp->next;
            
        }
         int mid = (count % 2 == 0) ? count / 2 : (count + 1) / 2;
          temp = head;
        for (int i = 1; i < mid; i++) {
        temp = temp->next;
        }
        
         newnode->next = temp->next;
    temp->next = newnode;
    
    return head;
    
    }
};