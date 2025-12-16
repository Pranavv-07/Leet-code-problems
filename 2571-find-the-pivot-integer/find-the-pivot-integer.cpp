class Solution {
public:
    int pivotInteger(int n) {
        int ans=0;
            int tot=(n*(n+1))/2;
            // int ls=0;
            // for(int i =1; i < n ;i++)
            // {
            //     ls+=i;
            //     int rs=tot-ls;
            //     if(ls==rs)
            //     {
            //         ans+=i;
            // }
            // }
            ans=sqrt(tot);
        if(ans*ans==tot)
        {
        return ans;
        }
        else return -1;
    }

};


