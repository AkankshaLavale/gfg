// User function template for C++
class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        // Your code goes here
        stack<int>st;
        int count =0;
        vector<int>ans;
        
        for(char ch:str){
            
            if(ch=='('){
                count++;
                ans.push_back(count);
                st.push(count);
                
            }else if(ch==')'){
                ans.push_back(st.top());
                st.pop();
            }
        }
        return ans;
    }
};