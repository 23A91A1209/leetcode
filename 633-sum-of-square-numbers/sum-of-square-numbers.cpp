class Solution {
public:
    bool judgeSquareSum(int c) {
       long long l=0,r=sqrt(c);
       long long sum=0;
       while(l<=r){
          sum=(l*l)+(r*r);
          if(sum==c){
            return true;
          }
          else if(sum>c){
             r--;
          }
          l++;
       }
       return false;
    }
};