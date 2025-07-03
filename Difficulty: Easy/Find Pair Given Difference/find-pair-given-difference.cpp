
class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        
        // code here
        
        sort(arr.begin(),arr.end());
        int n= arr.size();
        int start=0;
        int end=1;
        
        while(end<n){
            
            if(arr[end]-arr[start]==x){
                return true;
            }else if(arr[end]-arr[start]<x){
                end++;
                
            }else{
                start++;
            }
            if(start==end){
                end++;
            }
        }
        return false;
    }
};
