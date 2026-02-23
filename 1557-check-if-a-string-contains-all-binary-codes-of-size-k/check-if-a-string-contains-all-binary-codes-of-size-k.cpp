class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_map<string,int>mp;
        string str="";
        if(s.size()<k){
            return false;
        }
        for(int i=0;i<k;i++){
            str+=s[i];
        }
        mp[str]++;
        for(int i=k;i<s.size();i++){
            str.erase(0,1);
            str+=s[i];
            mp[str]++;
        }
        return (mp.size()==pow(2,k));
    }
};