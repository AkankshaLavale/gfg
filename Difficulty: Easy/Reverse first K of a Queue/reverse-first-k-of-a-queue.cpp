class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        if(k>q.size()) return q;
        int count = k;
        
        stack<int>st;
        
        while(k--){
            st.push(q.front());
            q.pop();
           
        }
        
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        int n = q.size()-count;
        
        while(n--){
            q.push(q.front());
            q.pop();
        }
        
        return q;
    }
};