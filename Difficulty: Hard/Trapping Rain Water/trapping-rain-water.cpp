class Solution {
public:
    int maxWater(vector<int>& arr) {
        int left = 0;
        int right = arr.size() - 1;

        int leftMax = 0;
        int rightMax = 0;
        int waterTrapped = 0;

        while (left <= right) {
            if (arr[left] <= arr[right]) {
                leftMax = max(leftMax, arr[left]);
                waterTrapped += leftMax - arr[left];
                left++;
            } 
            else {
                rightMax = max(rightMax, arr[right]);
                waterTrapped += rightMax - arr[right];
                right--;
            }
        }

        return waterTrapped;
    }
};