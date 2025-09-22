class Solution {
public:
    // Function to push elements of array into stack
    stack<int> push(vector<int> &arr) {
        stack<int> s;
        for (int i = 0; i < arr.size(); i++) {
            s.push(arr[i]);
        }
        return s;
    }

    // Function to pop elements from stack and print them
    void pop(stack<int> s) {
        while (!s.empty()) {
            cout << s.top();
            s.pop();
            if (!s.empty()) cout << " "; // avoid extra space at the end
        }
    }
};
