class Solution {
public:
    int residuePrefixes(string s) {
        int c=0;
        set<char>st;
        for(int j=0;j<s.size();j++){
           st.insert(s[j]);

            int distinct=st.size();
            if(distinct==(j+1)%3){
                c++;
            }
            
        }
        return c;
    }
};