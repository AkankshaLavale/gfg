/* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

/* Should return true if linked list is circular, else false */
class Solution {
  public:
    bool isCircular(Node *head) {
        
        // Your code here
         if (head == NULL) return true;
        unordered_map<Node*,bool>visited;
        Node*curr=head;
        while(curr){
            if(visited[curr]==1){
            return 1;
            }
            visited[curr]=1;
            curr=curr->next;
        }
         
        return false;
    }
};