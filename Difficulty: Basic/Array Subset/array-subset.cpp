class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        unordered_map<int,int> freq;
      
        for (int x : a) ++freq[x];
      
        for (int x : b) {
            auto it = freq.find(x);
            if (it == freq.end() || it->second == 0) return false;
            --(it->second);
        }
        return true;
    }
};
