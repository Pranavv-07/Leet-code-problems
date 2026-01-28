class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        int cnt=0;
        for(int i=n-2;i>0-1;i--)
            {
                if(nums[i]<nums[i+1])
                {
                  continue;
                }
                else return i+1;

            }
        return 0;
        
    }
};