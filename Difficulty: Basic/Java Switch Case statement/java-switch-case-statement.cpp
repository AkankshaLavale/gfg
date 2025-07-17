
class Solution {
  public:
    double switchCase(int choice, vector<double> &arr) {
        switch(choice) {
            case 1: {
                // Area of circle = π * R^2
                double R = arr[0];
                return M_PI * R * R;
            }
            case 2: {
                // Area of rectangle = L * B
                double L = arr[0];
                double B = arr[1];
                return L * B;
            }
            default:
                // Invalid choice
                return -1;
        }
    }
};
