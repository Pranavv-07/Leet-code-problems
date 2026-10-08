class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int current = 1;
        int ans = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) {
                current++;
            } else {
                current = 1;
            }

            ans = max(ans, current);
        }

        return ans;
    }
};