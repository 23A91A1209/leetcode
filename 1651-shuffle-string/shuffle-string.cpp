class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<pair<int,char>>ans;
        for(int i=0;i<indices.size();i++){
           ans.push_back({indices[i],s[i]});
        }
        sort(ans.begin(),ans.end());
        string res="";
        for(auto p:ans){
           res+=p.second;
        }
        return res;
    }
};