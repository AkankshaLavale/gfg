class Solution {
  public:

    Node* Reverse(Node* curr, Node* prev) {
        if (curr == NULL)
            return prev;
        Node* front = curr->next;
        curr->next = prev;
        return Reverse(front, curr);
    }

   

    Node* addTwoLists(Node* head1, Node* head2) {
        
        head1 = Reverse(head1, NULL);
        head2 = Reverse(head2, NULL);

        Node* curr1 = head1;
        Node* curr2 = head2;

        Node* dummy = new Node(0);
        Node* tail = dummy;
        int carry = 0;

        while (curr1 && curr2) {
            int sum = curr1->data + curr2->data + carry;
            tail->next = new Node(sum % 10);
            carry = sum / 10;

            tail = tail->next;
            curr1 = curr1->next;
            curr2 = curr2->next;
        }

        while (curr1) {
            int sum = curr1->data + carry;
            tail->next = new Node(sum % 10);
            carry = sum / 10;

            tail = tail->next;
            curr1 = curr1->next;
        }

        while (curr2) {
            int sum = curr2->data + carry;
            tail->next = new Node(sum % 10);
            carry = sum / 10;

            tail = tail->next;
            curr2 = curr2->next;
        }

        while (carry) {
            tail->next = new Node(carry % 10);
            carry /= 10;
            tail = tail->next;
        }

        
     Node* result = Reverse(dummy->next, NULL);

       
        while (result && result->data == 0) {
            result = result->next;
        }

        
        return result ? result : new Node(0);
        
    }
};
