class Solution {
  public:
    int value(char ch) {
        if (ch == 'I') return 1;
        if (ch == 'V') return 5;
        if (ch == 'X') return 10;
        if (ch == 'L') return 50;
        if (ch == 'C') return 100;
        if (ch == 'D') return 500;
        if (ch == 'M') return 1000;
        return 0;
    }

    int romanToDecimal(string &s) {
        int i = 0;
        int total = 0;
        int n = s.length();
        
        while (i < n) {
            int curr = value(s[i]);
            int next = (i + 1 < n) ? value(s[i + 1]) : 0;
            
            if (curr < next) {
                total += (next - curr);
                i += 2;
            } else {
                total += curr;
                i++;
            }
        }
        
        return total;
    }
};
