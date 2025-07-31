class Solution {
  public:
      
   
    int linearsearch(vector<int>& arr, int x, int index, int n) {
        if(index == n){
            return -1;
        }
        if(arr[index] == x){
            return index;
        }
        return linearsearch(arr, x, index + 1, n);
    }

 
    int search(vector<int>& arr, int x) {
        int n = arr.size();
        return linearsearch(arr, x, 0, n);
    }
};
