class Solution {
public:
    bool checkOnesSegment(string s) {
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                count++;
            }
        }
        int i=0,j=0;
        while(j<count){
            if(s[j]=='0'){
                return false;
            }
            j++;
            i++;

        }
        return true;

    }
};