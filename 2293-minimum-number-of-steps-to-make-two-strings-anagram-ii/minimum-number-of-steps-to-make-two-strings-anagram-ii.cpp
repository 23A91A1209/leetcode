class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int>sm;
        map<char,int>tm;
        for(int i=0;i<s.size();i++){
            sm[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            tm[t[i]]++;
        }
        int steps=0;
        for(int i='a';i<='z';i++){
            steps+=abs(sm[i]-tm[i]);
        }
        return steps;
    }
};