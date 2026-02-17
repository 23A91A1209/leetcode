class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        int n1=coordinate1[0]-'a';
        n1=n1+1;
        int n2=coordinate1[1]-'a';
        int m1=coordinate2[0]-'a';
        m1=m1+1;
        int m2=coordinate2[1]-'a';
        if(((n1+n2)%2==0 && (m1+m2)%2==0)||((n1+n2)%2!=0 && (m1+m2)%2!=0)){
            return true;
        }
        return false;
    }
};