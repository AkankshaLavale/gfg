class Solution {
  public:
  
    
    void helper(vector<int>&arr,int left,int right){
        
        if(left>=right){
            return;
        }
        
        swap(arr[left],arr[right]);
        helper(arr,left+1,right-1);
    }
    
    
    void reverseArray(vector<int> &arr) {
        // code here
        helper(arr,0,arr.size()-1);
        
       
    }
};