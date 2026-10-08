class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude = 0;
        int highest = 0;

        for (int x : gain) {
            altitude += x;
            highest = max(highest, altitude);
        }

        return highest;
        
    }
};