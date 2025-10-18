class Solution {
public:
    string toLower(string& s) {
        for (int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]); // convert each character to lowercase
        }
        return s;
    }
};
