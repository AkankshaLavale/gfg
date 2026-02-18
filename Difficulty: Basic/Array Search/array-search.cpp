class Solution {
  public:
    
    int find(vector<int>&arr, int x, int index){
        
        if(index==arr.size()){
            return -1;
        }
        
        if(arr[index]==x){
            return index;
        }
        return find(arr,x,index+1);
    }
    
    
    int search(vector<int>& arr, int x) {
        // code here
        return find(arr,x,0);
    }
};