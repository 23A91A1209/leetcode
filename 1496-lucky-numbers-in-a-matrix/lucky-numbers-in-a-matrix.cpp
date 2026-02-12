class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
       
        int maxi=INT_MIN;
        vector<int>row;
        vector<int>col;
        int c=0;
        for(int i=0;i<matrix.size();i++){
            int mini=INT_MAX;
            for(int j=0;j<matrix[0].size();j++){
                mini=min(mini,matrix[i][j]);
            }
            row.push_back(mini);
        }
        for(int j=0;j<matrix[0].size();j++){
            int maxi=INT_MIN;
            for(int i=0;i<matrix.size();i++){
                maxi=max(maxi,matrix[i][j]);
            }
            col.push_back(maxi);
        }
        row.insert(row.end(),col.begin(),col.end());
        map<int,int>mp;
        for(int x:row){
            mp[x]++;
        }
        vector<int>ans;
        for(auto p:mp){
            if(p.second==2){
                ans.push_back(p.first);
            }
        }
        return ans;
    }
};