
/* inserts an element x at
the back of the queue q */
void push(queue<int> &q, int x) {
    q.push(x);
}

/* pop out the front element
from the queue q and returns it */
int pop(queue<int> &q) {
    if (!q.empty()) {
        int front = q.front(); // save the front element
        q.pop();               // remove it from queue
        return front;          // return the popped element
    }
    return -1; // if queue is empty
}

/* returns the size of the queue q */
int getSize(queue<int> &q) {
    return q.size();
}

/* returns the last element of the queue */
int getBack(queue<int> &q) {
    if (!q.empty()) {
        return q.back(); // STL queue supports back()
    }
    return -1; // if queue is empty
}

/* returns the first element of the queue */
int getFront(queue<int> &q) {
    if (!q.empty()) return q.front();
    return -1;  // return -1 if queue is empty
}
