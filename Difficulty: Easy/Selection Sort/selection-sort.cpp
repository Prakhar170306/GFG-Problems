class Solution {
public:
    void selectionSort(vector<int>& arr) {
        int n = arr.size();

        for (int i = 0; i < n - 1; i++) {
            int smallestIndex = i;

            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[smallestIndex]) {
                    smallestIndex = j;
                }
            }

            if (smallestIndex != i) {
                swap(arr[i], arr[smallestIndex]);
            }
        }
    }
};