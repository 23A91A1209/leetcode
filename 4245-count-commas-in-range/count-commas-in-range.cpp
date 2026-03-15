class Solution {
public:
    int countCommas(int n) {
        int total=0;
      for(int i=1;i<=n;i++){
          string s=to_string(i);
          if(s.size()>=4){
              total+=(s.length()-1)/3;
          }
         
      }
        return total;
    }
};