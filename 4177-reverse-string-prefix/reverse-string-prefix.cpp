class Solution {
public:
    string reversePrefix(string s, int k) {
        string str="";
        for(int i=k-1;i>=0;i--){
            str+=s[i];
        }
        for(int j=k;j<s.size();j++){
            str+=s[j];
        }
        return str;
    }
};