class Solution {
public:
    string countSort(string s) {
        vector<int> count(26, 0);

        for (char ch : s) {
            count[ch - 'a']++;
        }

        int index = 0;

        for (int i = 0; i < 26; i++) {
            while (count[i]--) {
                s[index++] = char('a' + i);
            }
        }

        return s;
    }
};