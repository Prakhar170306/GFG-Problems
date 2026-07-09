class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        if (s1.length() != s2.length()) {
            return false;
        }

        int count[26] = {0};

        for (int i = 0; i < s1.length(); i++) {
            count[s1[i] - 'a']++;
        }

        for (int i = 0; i < s2.length(); i++) {
            int idx = s2[i] - 'a';

            if (count[idx] == 0) {
                return false;
            }

            count[idx]--;
        }

        return true;
    }
};