class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map<int, int> seen;
        seen[0] = 1;
        int subCnt = 0;
        int prefixsum = 0;
        for (int i : nums) {
            prefixsum += i;
            int req = prefixsum - k;
            if (seen.find(req) != seen.end()) {
                subCnt += seen[req];
            }
            seen[prefixsum]++;
        }
        return subCnt;
        
    }
};