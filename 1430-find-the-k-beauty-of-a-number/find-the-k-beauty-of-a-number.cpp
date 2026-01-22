class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s=to_string(num);
        int c=0;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                if((j-i+1)==k){
                    string res="";
                    for(int m=i;m<=j;m++){
                       res+=s[m];
                    }
                    if(stoi(res)!=0 && num%stoi(res)==0){
                        c++;
                    }
                }
            }
        }
        return c;
    }
};