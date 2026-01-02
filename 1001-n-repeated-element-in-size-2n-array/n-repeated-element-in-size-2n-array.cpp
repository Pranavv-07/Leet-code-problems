class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int>seen;
        for(int i:nums)
        {
            if(seen.count(i)){
                return i;
            }
            seen.insert(i);

        }
        return 0;
    }
};