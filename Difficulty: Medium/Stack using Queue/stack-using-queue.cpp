class myStack {
    queue<int> q1;
    queue<int> q2;

public:
    void push(int x) {
        if (q1.empty() && q2.empty()) {
            q1.push(x);
        } else if (q1.empty()) {
            q2.push(x);
        } else {
            q1.push(x);
        }
    }

    
    void pop() {
        if (q1.empty() && q2.empty()) return;

        if (q1.empty()) {
            while (q2.size() > 1) {
                q1.push(q2.front());
                q2.pop();
            }
            q2.pop(); 
        } else {
            while (q1.size() > 1) {
                q2.push(q1.front());
                q1.pop();
            }
            q1.pop();
        }
    }


    int top() {
        if (q1.empty() && q2.empty()) return -1;

        int topElement;
        if (q1.empty()) {
            while (q2.size() > 1) {
                q1.push(q2.front());
                q2.pop();
            }
            topElement = q2.front();
            q1.push(topElement);
            q2.pop();
        } else {
            while (q1.size() > 1) {
                q2.push(q1.front());
                q1.pop();
            }
            topElement = q1.front();
            q2.push(topElement); 
            q1.pop();
        }
        return topElement;
    }

    
    int size() {
        if (q1.empty() && q2.empty()) return 0;
        else if (q1.empty()) return q2.size();
        else return q1.size();
    }
};
