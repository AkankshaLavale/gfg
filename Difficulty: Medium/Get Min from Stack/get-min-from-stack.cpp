#include <stack>
#include <algorithm>
using namespace std;

class SpecialStack {
    stack<int> st1; // Main stack
    stack<int> st2; // Min stack

public:
    SpecialStack() {
        // Constructor: nothing needed here
    }

    void push(int x) {
        st1.push(x);
        if (st2.empty()) {
            st2.push(x);
        } else {
            st2.push(min(x, st2.top()));
        }
    }

    void pop() {
        if (!st1.empty()) {
            st1.pop();
            st2.pop();
        }
    }

    int peek() {
        if (!st1.empty()) {
            return st1.top();
        }
        return -1; // or throw an exception
    }

    bool isEmpty() {
        return st1.empty();
    }

    int getMin() {
        if (!st2.empty()) {
            return st2.top();
        }
        return -1; // or throw an exception
    }
};
