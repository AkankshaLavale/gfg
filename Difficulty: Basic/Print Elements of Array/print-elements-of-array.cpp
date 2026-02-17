// User function template for C++
class Solution {
  public:
    // Just print the space seperated array elements
    void helper(vector<int> &arr,int index){
        if(index==-1){
            return;
        }
        
        helper(arr,index-1);
        cout<<arr[index]<<" ";
    }
    void printArray(vector<int> &arr) {
        // code here
        helper(arr,arr.size()-1);
        
    }
};