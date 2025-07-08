class Solution {
  public:
    int lengthString(string &s) {
        int count = 0;
        for (char c : s) {
            count++;
        }
        return count;
    }
};