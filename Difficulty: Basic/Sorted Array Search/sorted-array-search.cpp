class Solution {
  public:
  
    bool Binarysearch(vector<int>& arr, int start, int end, int k) {
        if (start > end) {
            return false;
        }

        int mid = start + (end - start) / 2;

        if (arr[mid] == k) {
            return true;
        } 
        else if (arr[mid] > k) {
            return Binarysearch(arr, start, mid - 1, k); 
        } 
        else {
            return Binarysearch(arr, mid + 1, end, k);
        }
    }
  
    bool searchInSorted(vector<int>& arr, int k) {
        return Binarysearch(arr, 0, arr.size() - 1, k);
    }
};
