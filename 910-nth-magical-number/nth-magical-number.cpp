class Solution {
public:
    int nthMagicalNumber(int n, int a, int b) {
        long long l=min(a,b);
        long long  h=1ll*n*min(a,b);
        long long mod=1e9+7;
        long long  ans=0;
        while(l<=h){
            long long mid=l+(h-l)/2;// 1+(3-1)/2   1+3/2
            long long dvda=mid/a;
             long long dvdb=mid/b;
             long long lcm=a*b/__gcd(a,b);
             long long dvdboth=mid/lcm;
             long long count=dvda+dvdb-dvdboth;
            if((mid%a==0 || mid%b==0)&& count==n) return mid%mod;
            else if(n<=count){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};