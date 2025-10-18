// User function Template for C++
class Solution {
  public:
    string delAlternate(string S) {
        // code here
    string result ="";
    for(int i=0;i<S.size();i++){
        
        if(i>=0&&i%2==0){
            result+=S[i];
        }
    }
    
    return result;
    
    }
};