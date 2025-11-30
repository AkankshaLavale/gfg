class Solution {
public:
    int firstRepeated(vector<int> &arr) {
        
        unordered_map<int, int> firstIndex;   
        int ans = INT_MAX;

        for (int i = 0; i < arr.size(); i++) {
            if (firstIndex.find(arr[i]) == firstIndex.end()) {
                firstIndex[arr[i]] = i + 1;
            } 
            else {
                
                ans = min(ans, firstIndex[arr[i]]);
            }
        }

       
        if (ans == INT_MAX) return -1;
        return ans;
    }
};
