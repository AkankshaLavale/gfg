class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
         int n = arr.size();
    int left = 0;
    long long curr_sum = 0;

    for (int right = 0; right < n; ++right) {
        curr_sum += arr[right];

        while (left <= right && curr_sum > target) {
            curr_sum -= arr[left];
            ++left;
        }

        if (curr_sum == target) {
        
            return {left + 1, right + 1};
        }
    }

    return {-1};
    }
};