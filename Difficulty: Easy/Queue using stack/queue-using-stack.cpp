

class myQueue {

public:
    stack<int> st1;
    stack<int> st2;

    myQueue() {
        // Constructor
    }

    void enqueue(int x) {
       
        st1.push(x);
    }

    int dequeue() {  
        if (st1.empty() && st2.empty()) return -1;

        if (!st2.empty()) {
            int element = st2.top();
            st2.pop();
            return element;
        } else {
            while (!st1.empty()) {
                st2.push(st1.top());
                st1.pop();
            }
            int element = st2.top();
            st2.pop();
            return element;
        }
    }

    int front() {
        if (st1.empty() && st2.empty()) return -1;

        if (!st2.empty()) {
            return st2.top();
        } else {
            while (!st1.empty()) {
                st2.push(st1.top());
                st1.pop();
            }
            return st2.top();
        }
    }

    int size() {
        // ✅ Fixed to return total number of elements
        return st1.size() + st2.size();
    }
};
