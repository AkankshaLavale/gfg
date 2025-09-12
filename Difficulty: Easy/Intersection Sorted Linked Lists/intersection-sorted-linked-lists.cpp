/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution {
  public:
    Node* findIntersection(Node* head1, Node* head2) {
        // code goes here.
        Node* dummy = new Node(-1);
        Node* tail = dummy;
        Node*a=head1;
        Node*b=head2;
        
        while(a&&b){
            if(a->data==b->data){
                tail->next= new Node(a->data);
                tail=tail->next;
                a=a->next;
                b=b->next;
                
            }else if(a->data<b->data){
                a=a->next;
            }else{
                b=b->next;
            }
        }
        return dummy->next;
    }
};