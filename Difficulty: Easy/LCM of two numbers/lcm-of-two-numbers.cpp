class Solution {
  public:
  
  
     int findGCD(int a, int b){
         while(b!=0){
             int temp =b;
             b=a%b;
             a=temp;
         }
         return a;
     }
    int lcm(int a, int b) {
        
        return (a*b)/findGCD(a,b);
        // code here
        
    }
};