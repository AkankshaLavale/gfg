class Solution {
public:
  
    bool solve(int index, int sum, vector<int>& arr) {
       
        if (sum == 0) return true;
        if (index == arr.size()) return false;

        
        if (arr[index] <= sum) {
            
            if (solve(index + 1, sum - arr[index], arr)) return true;
        }

    
        return solve(index + 1, sum, arr);
    }


    bool isSubsetSum(vector<int>& arr, int sum) {
        return solve(0, sum, arr);
    }
};
