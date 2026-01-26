
string to_upper(string str) {
    // code
    for(int i=0;i<str.size();i++){
        
        if(str[i]>='a' && str[i]<='z'){
            str[i] = 'A' +(str[i]-'a') ;
        }
        
        
    }
    
    return str;
}