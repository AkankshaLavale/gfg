class Solution {
  public:
    
    void check(string&s,int i){
        if(i>=s.size()/2){
            return;
        }
        
        if(s[i]==s[s.size()-i-1]){
            
            check(s,i+1);
        }
    }
  
  
   
    bool isPalindrome(string& s) {
        // code here
        check(s,0);
    }
};