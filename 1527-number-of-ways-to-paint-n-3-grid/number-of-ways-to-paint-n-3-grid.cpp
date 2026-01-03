class Solution {
public:
    int numOfWays(int n) {
        const int mod=1000000007;
        long long a=6,b=6;
        for(int i=2;i<=n;i++){
            long long newa=(2*a+2*b)%mod;
            long long newb=(2*a+3*b)%mod;
            a=newa;
            b=newb;
        }
        return (a+b)%mod;
    

    }
};