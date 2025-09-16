class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        int n = arr.size();
        stack<int> st;

        for (int i = 0; i < n; i++) {
            if (st.empty()) {
                st.push(arr[i]);
            } else if (arr[i] >= 0) {
                if (st.top() >= 0) {
                    st.push(arr[i]);
                } else {
                    st.pop();
                }
            } else {
                if (st.top() < 0) {
                    st.push(arr[i]);
                } else {
                    st.pop();
                }
            }
        }

        vector<int> ans(st.size());
        int i = st.size() - 1;
        while (!st.empty()) {
            ans[i--] = st.top();
            st.pop();
        }

        return ans;
    }
};
