class Solution {
public:
    bool isSubsequence(string s, string t) {
        int index=0,count=0;
        for(int i=0;i<t.size();i++){
            if(t[i]==s[index]){
               count++;
               index++;
            }
        }
        if(count==s.size()){
            return true;
        }
        return false;
    }
};