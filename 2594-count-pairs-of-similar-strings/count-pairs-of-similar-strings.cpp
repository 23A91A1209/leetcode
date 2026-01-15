class Solution {
public:
    int similarPairs(vector<string>& words) {
        int c=0;
        for(int i=0;i<words.size();i++){
            set<char>n(words[i].begin(),words[i].end());
            for(int j=i+1;j<words.size();j++){
                set<char>m(words[j].begin(),words[j].end());
                if(n==m){
                    c++;
                }
            }
        }
        return c;
    }
};