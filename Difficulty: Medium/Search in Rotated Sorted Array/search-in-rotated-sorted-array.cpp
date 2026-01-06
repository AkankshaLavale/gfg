// class Solution {
//   public:
//     int search(vector<int>& arr, int key) {
//         // Code Here
        
//     }
// };


class Solution {
public:
    int search(vector<int>& nums, int key) {
        int start = 0, end = nums.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == key)
                return mid;

        
            if (nums[start] <= nums[mid]) {
                if (nums[start] <= key && key < nums[mid])
                    end = mid - 1;
                else
                    start = mid + 1;
            }
     
            else {
                if (nums[mid] < key && key <= nums[end])
                    start = mid + 1;
                else
                    end = mid - 1;
            }
        }
        return -1;
    }
};
