// User function Template for C++

class Solution {
  public:
    int largest(int arr[], int n) {
      int maxElement = arr[0]; 

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];  
        }
    }

    return maxElement;
    }
};
