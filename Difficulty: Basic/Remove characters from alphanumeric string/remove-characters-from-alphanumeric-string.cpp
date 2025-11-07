// User function template for C++
class Solution {
  public:

    string removeCharacters(string& s) {
        // Your code goes here
    string result = "";
    for (char ch : s) {
        if (isdigit(ch)) {   // keep only digits
            result += ch;
        }
    }
    return result;

    }
};