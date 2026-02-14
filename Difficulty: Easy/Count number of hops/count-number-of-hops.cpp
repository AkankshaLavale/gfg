
class Solution {
  public:
    // Function to count the number of ways in which frog can reach the top.
    int countWays(int n) {

        // your code here
        if(n<=2) return n;
        if(n==3) return 4;
        
        int ans = countWays(n-1)+countWays(n-2)+countWays(n-3);
        return ans;
    }
};
