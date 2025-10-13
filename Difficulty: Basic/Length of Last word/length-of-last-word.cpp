// User function Template for C++

int findLength(string s) {
    // code
    int count =0;
    for(int i=s.length()-1;i>=0;i--){
        
        if(s[i]==' '&& count>0 ){
            
            break;
        }else if(s[i]!=' '){
            count++;
        }
        
        
    }
    return count;
}