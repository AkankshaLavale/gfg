/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        Node*temp=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }
        if(k>count){
            return -1;
        }else{
            temp=head;
        count-=k;
         while(count--){
         temp=temp->next;
        
        }
        }
       return temp->data; 
    }
};