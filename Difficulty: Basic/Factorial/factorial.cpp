class Solution {
  public:
    int findFact(int n) {
        if (n == 0 || n == 1)
            return 1;
        return n * findFact(n - 1);  
    }

    void factorial(int n) {
        int result = findFact(n);     
        cout << result << endl;      
    }
};