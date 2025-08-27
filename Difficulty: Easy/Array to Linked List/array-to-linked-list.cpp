/*
// Representation of a node
class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* arrayToList(vector<int>& arr) {
        
        // code here
        int n =arr.size();
        if(n==0) return nullptr;
        
    Node*head=new Node(arr[0]);
    Node*current=head;
    
    for (int i = 1; i < n; i++) {
        current->next = new Node(arr[i]); 
        current = current->next;        
    }
    return head;
    }
};