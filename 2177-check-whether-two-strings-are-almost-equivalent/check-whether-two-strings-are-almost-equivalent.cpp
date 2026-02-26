class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        map<char,int>mp;
        map<char,int>mp_2;
        for(char c:word1){
            mp[c]++;
        }
        for(char ch:word2){
            mp_2[ch]++;
        }
        for(char i='a';i<='z';i++){
            int freq1=mp[i];
            int freq2=mp_2[i];

            if(abs(freq1-freq2)>3){
                return false;
            }
        }
        return true;
    }
};