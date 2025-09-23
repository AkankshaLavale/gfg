class Solution {
  public:
    string decToBinary(int n) {
        if(n == 0) return "0";

        string ans = "";
        while(n > 0) {
            int rem = n % 2;
            ans = char(rem + '0') + ans; // prepend '0' or '1'
            n /= 2;
        }
        return ans;
    }
};
