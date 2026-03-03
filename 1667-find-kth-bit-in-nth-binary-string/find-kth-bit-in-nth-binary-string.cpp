class Solution {
public:
    string rev(string s){
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                s[i]='1';
            }
            else{
                s[i]='0';
            }
        }
        reverse(s.begin(),s.end());
        return s;
    }
    char findKthBit(int n, int k) {
        if(n==1) return '0';
        string str="0";
        while(n>1){
            
            str=str+'1'+rev(str);
            n--;

        }
        return str[k-1];
    }
};