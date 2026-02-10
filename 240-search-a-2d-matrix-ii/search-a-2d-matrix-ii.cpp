class Solution {
public:
    bool searchMatrix(vector<vector<int>>& A, int target) {
        int m=A.size();
        int n=A[0].size();

        int i=0;
        int j=n-1;

        while(i<=m-1 && j>=0)
        {
            if(A[i][j]==target) return true;
            else if(A[i][j]>target)j--;
            else i++;
        }
        return false;
    }
};