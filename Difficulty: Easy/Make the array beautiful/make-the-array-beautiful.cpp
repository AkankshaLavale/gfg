class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        
        vector<int> ans;
        
        for(int i = 0; i < arr.size(); i++){
            if(!ans.empty() && 
               ((ans.back() >= 0 && arr[i] < 0) || (ans.back() < 0 && arr[i] >= 0))){
                ans.pop_back();
            }
            else{
                ans.push_back(arr[i]);
            }
        }
        
        return ans;
    }
};