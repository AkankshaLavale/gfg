class Solution {
  public:
    void insert(stack<int> &s, int x) {
        s.push(x);
    }

    void remove(stack<int> &s) {
        if(!s.empty())
            s.pop();
    }

    void headOf_Stack(stack<int> &s) {
        if(!s.empty())
            cout << s.top() << endl;
    }

    bool find(stack<int> s, int val) {
        while (!s.empty()) {
            if (s.top() == val) return true;
            s.pop();
        }
        return false;
    }
};
