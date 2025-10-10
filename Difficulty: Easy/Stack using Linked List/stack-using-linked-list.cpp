/* class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class myStack {

  public:
    
    Node*top;
    int c;
    
    myStack() {
        // Initialize your data members
        top = NULL;
        c = 0;
    }

    bool isEmpty() {
        // check if the stack is empty
        return top==NULL;
    }

    void push(int x) {
        // Adds an element x at the top of the stack
        Node*newnode = new Node(x);
       
        newnode->next = top;
        top = newnode;
        c+=1;
        
    }

    void pop() {
        // Removes the top element of the stack
        if(isEmpty()) return ;
        Node*temp = top;
        top = top->next;
        delete temp;
        c-=1;
    }

    int peek() {
        // Returns the top element of the stack
        // If stack is empty, return -1
        if(isEmpty()) return -1;
        
        return top->data;
    }

    int size() {
        // Returns the current size of the stack.
        return c;
    }
};