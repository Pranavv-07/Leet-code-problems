class Solution {
public:
       int bin(int n)
    {
        string s ;
        while(n)
        {
            s = to_string(n%2) + s;
            n/=2;
        }
        return count(s.begin() , s.end() , '1');
    }

    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i = 0 ; i <= n ; i++)
        {
            ans.push_back(bin(i));
        }
        return ans;

        
    }
};