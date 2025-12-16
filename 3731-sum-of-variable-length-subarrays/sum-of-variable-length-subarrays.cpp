class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        vector<int>p(n);
        p[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            p[i]=p[i-1]+nums[i];
        }
        for(int i=0;i<n;i++)
        {
            int r=i;
            int l=max(0,i-nums[i]);
            if(l==0)
            {
                sum+=p[r];
            }
            else {
                sum+=p[r]-p[l-1];
            }
        }
        return sum;
        
    }
};

