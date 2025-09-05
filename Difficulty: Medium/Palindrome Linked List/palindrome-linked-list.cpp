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
    bool isPalindrome(Node *head) {
        //  code here
        if(head->next==NULL){
            return true;
        }
        int count=0;
        Node*temp=head;
        while(temp){
            count++;
            temp=temp->next;
        }
        
        count/=2;
        
        Node*curr=head;
        Node*prev=NULL;
        while(count--){
            prev=curr;
            curr=curr->next;
        }
        prev->next=NULL;
        
        prev=NULL;
        Node*front;
        while(curr){
            front=curr->next;
            curr->next=prev;
            prev=curr;
            curr=front;
        }
        
        Node*head1=head;
        Node*head2=prev;
        while(head1){
            if(head1->data!=head2->data){
                return false;
            
            }head1=head1->next;
             head2=head2->next;
        }
        return true ;
        
        
        
        
        
    }
};