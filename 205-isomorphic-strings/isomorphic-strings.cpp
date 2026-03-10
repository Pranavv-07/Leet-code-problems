class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int>mps,mpt;
        for(int i=0;i<s.size();i++)
        {
            if(!mps.count(s[i])) mps[s[i]]=i;
            if(!mpt.count(t[i])) mpt[t[i]]=i;
            if(mpt[t[i]] != mps[s[i]]) return false;

        }
        return true;
    }
};