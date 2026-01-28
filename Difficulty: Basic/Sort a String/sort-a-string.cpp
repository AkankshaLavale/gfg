string sort(string s) {
    // complete the function here
    int n = s.size();
    
    int count[26]={0};
    
    for(int i=0;i<n;i++){
        
        count[s[i]-'a']++;
    }
    
    string ans;
    
    for(int i=0;i<26;i++){
        char c = i+'a';
        while(count[i]){
            ans.push_back(c);
            count[i]--;
        }
    }
    
    return ans;
}