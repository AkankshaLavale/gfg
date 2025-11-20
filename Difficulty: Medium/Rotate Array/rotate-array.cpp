class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        d = d % n;  // Handle cases where d > n
        
        // Step 1: Store first d elements
        vector<int> temp(d);
        for (int i = 0; i < d; i++) {
            temp[i] = arr[i];
        }

        // Step 2: Shift remaining elements to the left
        for (int i = d; i < n; i++) {
            arr[i - d] = arr[i];
        }

        // Step 3: Copy temp elements to the end
        for (int i = 0; i < d; i++) {
            arr[n - d + i] = temp[i];
        }
    }
};