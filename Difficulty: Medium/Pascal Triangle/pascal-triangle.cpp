class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        long long ans = 1;
        vector<int> vec;
        vec.push_back(ans);

        for(int i = 1; i < n; i++) {
            ans = (ans * (n - i)) / i;
            vec.push_back(ans);
        }

        return vec;
    }
};
