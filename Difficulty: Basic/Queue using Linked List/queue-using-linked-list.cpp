class Node {
  public:
    int data;
    Node* next;

    Node(int new_data) {
        data = new_data;
        next = nullptr;
    }
};

class myQueue {
    Node*front;
    Node*rear;

  public:
    myQueue() {
        // Initialize your data members
        front=rear=nullptr;
    }

    bool isEmpty() {
        // check if the queue is empty
        return (front==nullptr);
            
        
    }

    void enqueue(int x) {
        // Adds an element x at the rear of the queue
        Node*newNode = new Node(x);
        if(isEmpty()){
            front=rear=newNode;
        }else{
            rear->next=newNode;
            rear=newNode;
        }
    }

    void dequeue() {
        // Removes the front element of the queue
        Node*temp=front;
        if(isEmpty()){
            return ;
        }
        front=front->next;
        if(front==nullptr) rear=nullptr;
        delete temp;
            
    
        
    }

    int getFront() {
        // Returns the front element of the queue
        // If queue is empty, return -1
        if(isEmpty()){
            return -1;
        }else{
            return front->data;
        }
    }

    int size() {
        // Returns the current size of the queue.
        int count=0;
        Node*temp=front;
        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }
        return count;
    }
};
