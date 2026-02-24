class Solution {
  public:
  
    void tsum(vector<int>&arr,int index,int currentSum,vector<int>&result){
        
        if(index==arr.size()){
            result.push_back(currentSum);
            return;
        }
        
        tsum(arr,index+1,currentSum+arr[index],result);
    
        tsum(arr,index+1,currentSum,result);
        
        
    }
  
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        vector<int>result;
        tsum(arr,0,0,result);
        return result;
    }
};