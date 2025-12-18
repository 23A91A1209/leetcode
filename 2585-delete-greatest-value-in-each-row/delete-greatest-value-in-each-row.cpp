class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for(auto &k:grid){
            sort(k.begin(),k.end());
        }
        int maxi=INT_MIN,ans=0;
        for(int i=0;i<grid[0].size();i++){
            for(int j=0;j<grid.size();j++){
                maxi=max(maxi,grid[j][i]);
            }
            ans+=maxi;
        }
        return ans;
    }
};