// User function template for C++
class Solution {
  public:
    // Just print the space seperated array elements
    void helper(vector<int> &arr,int index){
        if(index==arr.size()){
            return;
        }
        cout<<arr[index]<<" ";
        helper(arr,index+1);
    }
    void printArray(vector<int> &arr) {
        // code here
        helper(arr,0);
        
    }
};