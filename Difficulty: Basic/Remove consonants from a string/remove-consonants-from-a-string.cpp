
class Solution {
  public:
    string removeConsonants(string s) {
        // complete the function heredef removeConsonants(s):
        string result ="";
        
        
        
        for(char ch : s){
            
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u' || 
               ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
                   result+=ch;
               }
           
        }
         if(result.empty()) {
                cout<<"No Vowel";
            }
        
        return result;
    }
};