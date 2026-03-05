class Solution {
public:
    int minOperations(string s) {
        string str=s;
        int count=0,c2=0;
        for(int i=1;i<s.size();i++){
            if(s[i-1]==s[i]){
                count++;
                if(s[i]=='0'){
                    s[i]='1';
                }
                else{
                    s[i]='0';
                }
            }
        }
        int c=1;
        if(str[0]=='1') str[0]='0';
        else str[0]='1';
        for(int i=1;i<s.size();i++){
            if(str[i-1]==str[i]){
               c++;
               if(str[i]=='0'){
                str[i]='1';
               }
               else{
                str[i]='0';
               }
            }
        }
         return min(count,c);
        
       
    }
};