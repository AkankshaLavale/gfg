// User function Template for C++

// Complete this function
class Solution {
  public:
    void reverseArray(vector<int>& arr) {

        // Your code here
        stack<int>st;
        for(int i=0;i<arr.size();i++){
            st.push(arr[i]);
        }   int i=0;
            while(!st.empty()){
            arr[i]=st.top();
            i++;
            st.pop(); 
        }
        

        // Reverse the array
    }
};