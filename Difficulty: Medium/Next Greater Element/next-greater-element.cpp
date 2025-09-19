class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
       int n = arr.size();
    vector<int> ans(n, -1);  // by default, -1
    stack<int> st;

    for (int i = n - 1; i >= 0; i--) {
        // Remove all smaller or equal elements from stack
        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

        // If stack is not empty, top is the NGE
        if (!st.empty()) {
            ans[i] = st.top();
        }

        // Push current element to stack
        st.push(arr[i]);
    }
    return ans;
    }
};




