/*
The structure of linked list is the following

struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:


    Node* reverse(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        while (curr != NULL) {
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    Node* compute(Node* head) {
    
        head = reverse(head);

        Node* curr = head;
        int maxVal = curr->data;

        while (curr != NULL && curr->next != NULL) {
            if (curr->next->data < maxVal) {
    
                Node* temp = curr->next;
                curr->next = temp->next;
                delete temp;
            } else {
                curr = curr->next;
                maxVal = curr->data;
            }
        }

        head = reverse(head);
        return head;
    }
};
