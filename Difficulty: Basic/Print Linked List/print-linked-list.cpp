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
    vector<int> displayList(Node *head) {
        // code here
        vector<int>ans;
        Node*temp=head;
        while(temp!=NULL){
            ans.push_back(temp->data);
            temp=temp->next;
            
        }
       
       return  ans; 
    }
};