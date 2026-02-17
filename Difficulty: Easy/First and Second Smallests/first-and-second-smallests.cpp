class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
        int smallest = arr[0];
        int secondSmallest = INT_MAX;
        
        for(int i=0;i<arr.size();i++){
            
            if(arr[i]<smallest){
                secondSmallest = smallest;
                smallest = arr[i];
            }else if(arr[i]>smallest && arr[i]<secondSmallest){
                secondSmallest = arr[i];
            }
        }
        if(secondSmallest == INT_MAX)
            return {-1};
        return {smallest,secondSmallest};
    }
};