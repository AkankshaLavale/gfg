class Solution {
  public:
    int RecursivePower(int n, int p) {
        // Code here
        if(p==0){
            return 1;
        }
        if(p==1){
            return n;
        }
        
        return n*RecursivePower(n,p-1);
    }
};










// int pow(int num,int n){
//      if(n==0){
//         return 1;
//      }
//     if(n==1)
// {
//     return num;
// }    
    
//   return num*pow(num,n-1);

// }
