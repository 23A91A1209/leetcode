class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int c=0,m=0,ans=0;
        for(int i=0;i<s.size();i++){
             c=0,m=0;
            for(int j=i;j<s.size();j++){
                   if(s[j]=='0'){
                      c++;
                    }
                    else{
                      m++;
                    }
                    if(c<=k || m<=k){
                      ans++;
                    }
                    else{
                     break;
                    }
                 
            }
            
        }
            
        return ans;
    }
};