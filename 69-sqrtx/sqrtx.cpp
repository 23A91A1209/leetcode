class Solution {
public:
    int mySqrt(int x) {
        int n=150;
        long long i=-1;
        long long j=x;
        if(x==0) return 0;
        if(x==1) return 1;
        while(n--){
            long long mid=(i+j)/2;
            if(mid*mid<=x){
                i=mid;
            }
            else{
                j=mid;
            }
        }
        return i;
    }
};