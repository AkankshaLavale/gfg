


class Solution {

public:
    // Function to push an element in queue.
    void enqueue(queue<int> &q, int x) {
        q.push(x);
    }

    // Function to remove front element from queue.
    void dequeue(queue<int> &q) {
        if (!q.empty()) {
            q.pop();
        }
    }

    // Function to find the front element of queue.
    int front(queue<int> &q) {
        if (!q.empty()) return q.front();
        return -1;  // return -1 if queue is empty
    }

    // Function to find an element in the queue.
    bool find(queue<int> q, int y) {
        while (!q.empty()) {
            if (q.front() == y) return true;
            q.pop();
        }
        return false;
    }
};
