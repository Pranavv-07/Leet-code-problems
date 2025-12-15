class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        int tot_sum=0;
        for(int i:nums)
        {
            tot_sum+=i;
        }
        int leftsum=0;
        for (int i = 0; i < n; i++){
            int rightsum = tot_sum - leftsum - nums[i];
            ans[i] = abs(leftsum - rightsum);
            leftsum += nums[i];
        }
        return ans;
    }
};