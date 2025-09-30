
class myQueue {
    int front;
    int rear;
    int size;
    int *arr;
    int count;  // tracks number of elements in queue

public:
    myQueue(int n) {
        size = n;
        arr = new int[size];
        front = 0;
        rear = -1;
        count = 0;
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == size;
    }

    void enqueue(int x) {
        if (isFull()) return;

        rear = (rear + 1) % size;
        arr[rear] = x;
        count++;
    }

    void dequeue() {
        if (isEmpty()) return;

        front = (front + 1) % size;
        count--;
    }

    int getFront() {
        if (isEmpty()) return -1;
        return arr[front];
    }

    int getRear() {
        if (isEmpty()) return -1;
        return arr[rear];
    }
};
