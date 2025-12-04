class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int j=1;j<=n;j++){
        for(int i=0;i<j;i++){
            cout<<"*"<<" ";
        }
        cout<<endl;
        }
    }
};