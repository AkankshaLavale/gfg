class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int i=0;
        int j=0;
        int n=arr.size();
        
        while(i<n){
            if(arr[i]!=0){
                swap(arr[i],arr[j]);
                j++;
                
            }
            i++;
        }
    }
};