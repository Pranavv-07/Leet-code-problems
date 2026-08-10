class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' ||
               c == 'o' || c == 'u';
    }
    int maxVowels(string s, int k) {
        int cnt=0;
        int max_v=0;

        for(int i=0;i<k;i++)
        {
            if (isVowel(s[i])) {
                cnt++;
            }
        }
        max_v=cnt;
        for (int i = k; i < s.size(); i++) {

            if (isVowel(s[i - k])) {
                cnt--;
            }
            if (isVowel(s[i])) {
                cnt++;
            }

            max_v = max(max_v, cnt);
        }

        return max_v;
    }
      
};