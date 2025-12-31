class Solution {
  public:
    void printTable(int n) {
        int multiplier = 10;
        while (multiplier) {
            // Your code here
            cout<<multiplier*n<<" ";
            multiplier--;
        }

        cout << endl;
    }
};