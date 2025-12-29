class Solution {
public:
    int pivotInteger(int n) {
        int totsum=n*(n+1)/2;
        int x=sqrt(totsum);
        if(x*x== totsum) return x;
        return -1;
    }
};