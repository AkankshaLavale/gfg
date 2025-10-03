// User function template for C++
class Solution {
  public:
    // Function to return sum of elements
    int arraySum(vector<int>& arr) {
        // code here
        int n = arr.size();
        int ans = 0;
        
        for(int i=0;i<n;i++){
            
            ans+=arr[i];
            
        }
        return ans;
    }
};