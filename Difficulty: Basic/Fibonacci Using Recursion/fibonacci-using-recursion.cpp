class Solution {
  public:
    int fibonacci(int n) {
        // Code here
        if(n==0){
            return 0;
        }
        
        if(n==1){
            return 1;
        }
        
        return fibonacci(n-1)+fibonacci(n-2);
    }
};