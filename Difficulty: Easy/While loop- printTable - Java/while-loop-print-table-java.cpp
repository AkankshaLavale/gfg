class Solution {
public:
    void calculateMultiples(int n) {
        int i = 10;
        while(i >= 1) {
            cout << n * i << " ";
            i--;
        }
    }
};
