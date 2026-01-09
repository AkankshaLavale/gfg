class Solution {
  public:
    
    int firstOcc(vector<int>& arr, int target) {
        int start = 0, end = arr.size() - 1;
        int ans = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] == target) {
                ans = mid;         
                end = mid - 1;      
            }
            else if (arr[mid] < target) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return ans;
    }

    int lastOcc(vector<int>& arr, int target) {
        int start = 0, end = arr.size() - 1;
        int ans = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] == target) {
                ans = mid;         
                start = mid + 1;    
            }
            else if (arr[mid] < target) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return ans;
    }

    int countFreq(vector<int>& arr, int target) {
        int first = firstOcc(arr, target);
        if (first == -1) return 0;  

        int last = lastOcc(arr, target);
        return last - first + 1;
    }
};
