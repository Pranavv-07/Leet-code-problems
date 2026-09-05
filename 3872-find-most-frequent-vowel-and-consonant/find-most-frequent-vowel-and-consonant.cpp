class Solution {
public:
    int maxFreqSum(string s) {
        int freq[26]={0};
        string v="aeiou";
        for (char i:s){
            freq[i-'a']++;
        }
        int maxc=0,maxv=0;
        for(int i=0;i<26;i++){
            char ch='a'+i;
            if(v.find(ch)!=string::npos){
                maxv=max(maxv,freq[i]);
            }
            else maxc=max(maxc,freq[i]);
        }
        return maxc+maxv;
    }
};