class Solution {
public:
    int maxSubarraySum(vector<int>& arr) {
        int currentSum = arr[0];
        int maximumSum = arr[0];

        for (int i = 1; i < arr.size(); i++) {
            currentSum = max(arr[i], currentSum + arr[i]);
            maximumSum = max(maximumSum, currentSum);
        }

        return maximumSum;
    }
};