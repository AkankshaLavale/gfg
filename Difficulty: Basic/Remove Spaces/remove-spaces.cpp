class Solution {
  public:
    string modify(string& s) {
        // code here.
        string result="";        
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                result+=s[i];
            }
        }
        
        return result;
    }
};