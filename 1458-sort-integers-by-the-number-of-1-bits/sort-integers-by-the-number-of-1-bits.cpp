class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>ans;
        for(int i=0;i<arr.size();i++){
            int count=__builtin_popcount(arr[i]);
            ans.push_back({count,arr[i]});
        }
        sort(ans.begin(),ans.end());
        vector<int>result;
        for(auto j:ans){
             result.push_back(j.second);
        }
        return  result;
    }
};