
class Solution {
  public:
    string convert(string& s) {
        // code here
        int n = s.length();
    
        if(s[0]>='a' && s[0]<='z'){
                
            s[0] = (s[0]-'a')+'A';
        }
        
        for(int i = 1; i<n;i++){
            
            if(s[i-1]==' ' && s[i]>='a' && s[i]<='z'){
                
                s[i] = (s[i]-'a')+'A';
            }
        }
        
        return s;
        
    }
};