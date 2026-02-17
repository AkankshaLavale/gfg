class Solution {
  public:
    
    int helper(int arr[],int size,int index){
        if(index==size){
            return 0;
        }
        return arr[index]+helper(arr,size,index+1);
    }
     
     
    int arraySum(int arr[], int size) {
        // Code here
        helper(arr,size,0);
    }
};