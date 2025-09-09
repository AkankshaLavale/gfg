/*
class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
} */

class Solution {
  public:
  
  
    bool detectLoop(Node* head) {
        // code here
        Node*curr=head;
     unordered_map<Node*,bool>visited;        
        while(curr){
            if(visited[curr]==1){
                return true;
            }
            visited[curr]=1;
            curr=curr->next;
        }
        return false;
    }
};