class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        string s="";
        while(n>0){
           s=char('0'+(n%2))+s;
           n=n/2;
        }

        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                s[i]='1';
            }
            else{
                s[i]='0';
            }
        }
        int num=stoi(s,0,2);
        return num;



    }
};