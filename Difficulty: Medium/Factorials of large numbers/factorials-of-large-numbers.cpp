class Solution {
public:
    vector<int> factorial(int n) {
        vector<int> ans(1, 1);  
        
        while (n > 1) {
            int carry = 0;
            
            for (int i = 0; i < ans.size(); i++) {
                int sum = n * ans[i] + carry;
                ans[i] = sum % 10;
                carry = sum / 10;
            }
            
            while (carry) {
                ans.push_back(carry % 10);
                carry /= 10;
            }
            
            n--;  
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
