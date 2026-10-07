class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
         int totalSum = 0;

        
        for (int x : nums) {
            totalSum += x;
        }

        int leftSum = 0;

        for (int i = 0; i < nums.size(); i++) {

            int rightSum = totalSum - leftSum - nums[i];

            if (leftSum == rightSum) {
                return i;
            }

            
            leftSum += nums[i];
        }

        return -1;
    }
};