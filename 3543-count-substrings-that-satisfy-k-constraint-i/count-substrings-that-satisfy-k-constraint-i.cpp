class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int c=0,m=0,ans=0;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                 c=0,m=0;
                for(int k=i;k<=j;k++){
                   if(s[k]=='0'){
                      c++;
                    }
                    else if(s[k]=='1'){
                      m++;
                    }
                }
                
                if(c<=k || m<=k){
                 ans++;
                }
               
            }
             
        }
            
        return ans;
    }
};