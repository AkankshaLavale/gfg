class Solution {
  public:
    void printNos(int N) {
        if (N == 1) {
            cout<<1;
            return; 
        }
    
        cout << N << " ";
        printNos(N-1);
        
    }
};
