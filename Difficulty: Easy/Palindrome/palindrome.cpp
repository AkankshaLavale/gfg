class Solution {
  public:
    bool isPalindrome(int n) {
        // code here.
        string s = to_string(n);
        int left = 0;
        int right =s.size()-1;
        
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