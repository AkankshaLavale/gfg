#include <iostream>
#include <queue>
using namespace std;

class myQueue {
private:
    queue<int> q;

public:
    // 1. Enqueue
    void enqueue(int x) {
        q.push(x);
    }

    // 2. Dequeue
    void dequeue() {
        if (!q.empty()) {
            q.pop();
        }
    }

    // 3. Get Front Element
    int getFront() {
        if (!q.empty()) return q.front();
        return -1;
    }

    // 4. Get Rear Element
    int getRear() {
        if (!q.empty()) return q.back();
        return -1;
    }

    // 5. Check if Empty
    bool isEmpty() {
        return q.empty();
    }

    // 6. Get Size
    int size() {
        return q.size();
    }
};
