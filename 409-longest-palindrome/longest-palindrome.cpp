class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        int length=0;
        bool hasodd=false;
        for(auto p:mp){
            if(p.second%2==0){
                 length+=p.second;

            }
            else{
                length+=p.second-1;
                hasodd=true;
            }
        }
        return hasodd?length+1:length;
    }
};