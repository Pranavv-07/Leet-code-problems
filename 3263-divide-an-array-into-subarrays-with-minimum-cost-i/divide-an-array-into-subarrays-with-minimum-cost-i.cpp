class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;

        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                int cost = nums[0] + nums[i + 1] + nums[j + 1];
                ans = min(ans, cost);
            }
        }
        return ans;
        
    }
};