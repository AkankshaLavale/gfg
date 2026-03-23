// User function Template for C++

class Solution {
  public:
    stack<int> insertAtBottom(stack<int> st, int x) {
        
        stack<int>extra;
        
        while(!st.empty()){
            extra.push(st.top());
            st.pop();
        }
        
        st.push(x);
        
        while(!extra.empty()){
            st.push(extra.top());
            extra.pop();
        }
        
        return st;
    }
};