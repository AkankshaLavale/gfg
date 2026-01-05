class Solution {
public:
    int missingNum(vector<int>& arr) {
        int size = arr.size();
        int n = size + 1;

        long long arrSum = 0;
        for (int i = 0; i < size; i++) {
            arrSum += arr[i];
        }

        long long expectedSum = 1LL * n * (n + 1) / 2;

        return expectedSum - arrSum;
    }
};
