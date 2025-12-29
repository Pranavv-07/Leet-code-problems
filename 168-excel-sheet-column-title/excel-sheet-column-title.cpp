class Solution {
public:
    string convertToTitle(int clno) {
        string ans;
        while (clno > 0) {
            clno--;                    
            int rem = clno % 26;
            ans += char('A' + rem);
            clno /= 26;
        }
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};