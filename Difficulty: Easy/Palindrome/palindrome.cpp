class Solution {
  public:
    bool isPalindrome(int n) {
        return n == reverseNumber(n, 0);
    }
    
  private:
    int reverseNumber(int n, int rev) {
        if(n == 0)
            return rev;
        return reverseNumber(n / 10, rev * 10 + n % 10);
    }
};
