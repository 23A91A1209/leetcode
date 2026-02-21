class Solution {
public:
    bool isprime(int x){
        if(x==1) return false;
        int h=0;
        for(int i=2;i<x;i++){
            if(x%i==0){
                return false;
            } 
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int count=0;
        for(int i=left;i<=right;i++){
            int one_c=__builtin_popcount(i);
            if(isprime(one_c)){
                count++;
            }
        }
        return count;
    }
};