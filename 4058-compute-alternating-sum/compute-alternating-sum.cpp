class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        
        int evensum=0;
        int oddsum=0;
        for(int i=0;i<nums.size();i+=2)
        {
            evensum+=nums[i];
        }
        for(int i=1;i<nums.size();i+=2)
        {
            oddsum+=nums[i];
        }
        return evensum-oddsum;
    }
};