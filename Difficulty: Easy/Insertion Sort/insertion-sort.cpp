
class Solution {
public:
    void insertionSort(vector<int>& arr) {
        int n = arr.size();

        for (int i = 1; i < n; i++) {
            int currentElement = arr[i];
            int j = i - 1;

            while (j >= 0 && arr[j] > currentElement) {
                arr[j + 1] = arr[j];
                j--;
            }

            arr[j + 1] = currentElement;
        }
    }
};
