class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int n = arr.size();
        int totalsum = 0;
        for(int i=0;i<n;i++){
            totalsum+=arr[i];
        }
        
        int prefix =0;
        for(int i =0;i<n;i++){
            
            prefix+=arr[i];
            int ans =totalsum-prefix;
            
            if(prefix==ans){
                return 1;
            } 
            
            
        }
        return 0;
    }
};
