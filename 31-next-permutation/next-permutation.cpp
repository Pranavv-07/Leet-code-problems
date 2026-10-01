class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();

    // Step 1: Find pivot
    int i = n - 2;

    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }

    // If pivot exists
    if (i >= 0) {

        // Step 2: Find number just greater than nums[i]
        int j = n - 1;

        while (nums[j] <= nums[i]) {
            j--;
        }

        swap(nums[i], nums[j]);
    }

    // Step 3: Reverse the part after pivot
    reverse(nums.begin() + i + 1, nums.end());
        
    }
};