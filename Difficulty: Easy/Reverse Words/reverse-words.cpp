class Solution {
public:
    string reverseWords(string &s) {
        stack<string> st;
        string word = "";

        for (char c : s) {
            if (c == '.') {
                if (!word.empty()) {
                    st.push(word);
                    word = "";
                }
            } else {
                word += c;
            }
        }

        if (!word.empty()) {
            st.push(word);
        }

        string result = "";
        while (!st.empty()) {
            result += st.top();
            st.pop();
            if (!st.empty()) {
                result += ".";
            }
        }

        return result;
    }
};

