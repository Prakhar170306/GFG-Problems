class Solution {
public:
    int kthSmallest(vector<int>& arr, int k) {
        priority_queue<int> maxHeap;

        for (int value : arr) {
            maxHeap.push(value);

            if (maxHeap.size() > k) {
                maxHeap.pop();
            }
        }

        return maxHeap.top();
    }
};