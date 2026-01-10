class Solution {
public:
    bool isvowel(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
    int maxFreqSum(string s) {
        vector<int> freq(26,0);
        for(char m:s){
            freq[m-'a']++;
        }
        int v=INT_MIN,c=INT_MIN;
        for(int i=0;i<26;i++){
            char letter='a'+i;
            if(isvowel(letter)){
               v=max(v,freq[i]);
            }
            else{
                c=max(c,freq[i]);
            }
        }
        return v+c;
    }
};