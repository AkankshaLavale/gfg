class Solution {
  public:
    
    void check(string&s,int left,int right){
        if(left>=right){
            return;
        }
        
        if(s[left]==s[right]){
            
            check(s,left+1,right-1);
        }
    }
  
  
   
    bool isPalindrome(string& s) {
        // code here
        check(s,0,s.size()-1);
    }
};