

class Solution {
  public:
    bool isPalindrome(int num) {
        string s = to_string(num);
        stack<char> st;
        for (char c : s) st.push(c);
        string rev = "";
        while (!st.empty()) {
            rev += st.top();
            st.pop();
        }
        return s == rev;
    }

    bool isPalinArray(vector<int> &arr) {
        for (int num : arr) {
            if (!isPalindrome(num)) return false;
        }
        return true;
    }
};
