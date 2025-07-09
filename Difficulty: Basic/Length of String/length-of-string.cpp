class Solution {
  public:
    int lengthString(string &s) {
        int count = 0;
        while (s[count] != '\0') {
            count++;
        }
        return count;
    }
};
