/*
Structure of the node of the binary tree
struct Node
{
    int data;
    struct Node *next;

    Node(int x){
        int data = x;
        next = NULL;
    }
};
*/
// Complete this function
class Solution {
  public:
    void deleteAlt(struct Node *head) {
        if (!head) return;
        Node* curr = head->next;
        Node* prev = head;
        while (curr) {
            prev->next = curr->next;
            delete curr;
            prev = prev->next;
            if (prev)
                curr = prev->next;
            else
                curr = nullptr;
        }
    }
};
