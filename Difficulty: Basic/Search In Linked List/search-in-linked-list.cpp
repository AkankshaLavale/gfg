// User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }

};
*/
class Solution {
  public:
    bool searchLinkedList(Node *head, int x) {
        // Your code here
        Node*temp=head;
        while(temp!=NULL){
            if(temp->data==x){
                return 1;
            }
            temp=temp->next;
        }
        return 0;
    }
};