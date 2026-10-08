class Solution {
public:
    bool checkInclusion(string s1, string s2) {
          if (s1.size() > s2.size())
            return false;

        vector<int> need(26, 0);
        vector<int> window(26, 0);

        // Frequency of characters in s1
        for (char c : s1) {
            need[c - 'a']++;
        }

        int k = s1.size();

        for (int i = 0; i < s2.size(); i++) {
            window[s2[i] - 'a']++;

            // Keep window size equal to s1's length
            if (i >= k) {
                window[s2[i - k] - 'a']--;
            }

            // Check if current window is a permutation
            if (window == need) {
                return true;
            }
        }

        return false;
    }
};