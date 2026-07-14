class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    int mc=0,cc=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==1)
        {
            cc++;
        }
        else{
            if(cc>mc)
            {
                mc=cc;
            }
            cc=0;
        }
    }
    if(cc>mc)
    {
        mc=cc;
    }
        return mc;
    }
};