class Solution {
  public:
    vector<int> getThreeLargest(vector<int>& arr) {
        set<int, greater<int>> s;

        for (int num : arr) {
            s.insert(num);
        }

        vector<int> result;
        int count = 0;

        for (int num : s) {
            if (count == 3) break;
            result.push_back(num);
            count++;
        }

        return result;
    }
};
