class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        long long n = arr.size();
        long long sumN = n * (n + 1) / 2;
        long long sumSqN = n * (n + 1) * (2*n + 1) / 6;

        long long S = 0, Sq = 0;
        for (int x : arr) {
            S += x;
            Sq += 1LL * x * x;
        }

        long long diff = S - sumN;            
        long long sqDiff = Sq - sumSqN;       

        long long sumRplusM = sqDiff / diff;  

        long long R = (diff + sumRplusM) / 2;
        long long M = R - diff;

        return { (int)R, (int)M };
    }
};
