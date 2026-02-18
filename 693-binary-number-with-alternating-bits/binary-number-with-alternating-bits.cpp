class Solution {
public:
    bool hasAlternatingBits(int n) {
        int previous=n%2;
        n=n/2;
        while(n>0){
            int present=n%2;
            if(previous==present) return false;
            previous=present;
            n=n/2;
        }
        return true;
    }
};