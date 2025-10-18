class Solution {
public:

    bool isVowel(char ch) {
        return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
    }

    string Sandwiched_Vowel(string &s) {
        string result = "";
        int n = s.length();

        for (int i = 0; i < n; i++) {
            if (isVowel(s[i])) {
             
                if (i > 0 && i < n-1 && !isVowel(s[i-1]) && !isVowel(s[i+1])) {
                    
                    continue;
                }
            }
         
            result += s[i];
        }

        return result;
    }
};
