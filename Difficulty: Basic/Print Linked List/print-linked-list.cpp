/*
class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> printList(Node *head) {
        // code here
        
        vector<int> result;
        Node* current=head;
        
        while(current!=NULL){
            
            result.push_back(current->data);
            
            current=current->next;
        
            
        }
        
        return result  ;
        
    }
};