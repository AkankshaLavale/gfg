// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        
            
            int min=arr[0];
            int max=arr[n-1];
        
        
        
        
        return{min,max};
    }
};