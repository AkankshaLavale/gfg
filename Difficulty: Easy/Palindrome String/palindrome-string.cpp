class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        int left = 0;
        int right =s.length()-1;
        
        while(left<right){
            
            if(s[left]!=s[right]){
                return false;
            }
            left = left+1;
            right = right-1;
        }
        
        return true;
    }
};


