class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i = 0;
        int j = k-1;
        int n = nums.size();

        int sum = 0;
        for (int i= 0;i<k;i++ ){
            sum += nums[i];
        }
        int maxsum = sum;
        while(j<n-1){
            sum = sum - nums[i];
            i++;
              j++;
          
            sum = sum + nums[j];
            

            maxsum = max(maxsum,sum);
            
       
        }
        
        return (double)maxsum/k;
    }
};