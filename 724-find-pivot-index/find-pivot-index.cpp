class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefix(n+1);
        int rs=0;
        for(int i=0;i<n;i++)
        {
            rs+=nums[i];
            prefix[i+1]=rs;
        }
        for(int i=0;i<n;i++)
        {
            int lsum=prefix[i];
            int rsum=prefix[n]-prefix[i+1];
            if(lsum==rsum) return i;
        }
        return -1;
    }
};