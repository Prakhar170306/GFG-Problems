class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int candidate = -1;
        int count = 0;

        for (int x : arr) {
            if (count == 0) {
                candidate = x;
                count = 1;
            } else if (x == candidate) {
                count++;
            } else {
                count--;
            }
        }

        int freq = 0;
        for (int x : arr) {
            if (x == candidate) {
                freq++;
            }
        }

        if (freq > arr.size() / 2) {
            return candidate;
        }

        return -1;
    }
};