class Solution {
  public:
    bool isRotated(string& s1, string& s2) {
        // code here
        bool clockwise = true;
        int n = s1.size();
        
        for(int i=0;i<n;i++){
            
            if(s1[i]!=s2[(i+2)%n]){
                clockwise = false;
                break;
            }
            
        }
        if(clockwise) return true;
        
        
        bool anticlockwise = true;
        
        
        for(int i=0;i<n;i++){
            
            if(s2[i]!=s1[(i+2)%n]){
                anticlockwise = false;
                break;
            }
        }
        return anticlockwise;
        
    }
};
