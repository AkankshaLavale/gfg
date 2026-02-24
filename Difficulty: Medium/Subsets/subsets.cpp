class Solution {
  public:
  
    void allSubsets(vector<int>&arr,int index,vector<int>current,vector<vector<int>>&result){
        
        if(index==arr.size()){
            result.push_back(current);
            return;
        }
        
        current.push_back(arr[index]);
        allSubsets(arr,index+1,current,result);
        
        current.pop_back();
        
        allSubsets(arr,index+1,current,result);
    }
  
    
    vector<vector<int>> subsets(vector<int>& arr) {
        // code here
        vector<vector<int>>result;
        vector<int>current;
        
        allSubsets(arr,0,current,result);
        
        return result;
    }
};