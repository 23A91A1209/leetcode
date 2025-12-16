class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int c=0;
        vector<pair<int,int>>res;
          for(int i=0;i<mat.size();i++){
            c=0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1){
                    c++;
                }
            }
            res.push_back({c,i});
          }
          vector<int>ans;
          sort(res.begin(),res.end());
          for(int i=0;i<k;i++){
            ans.push_back(res[i].second);
          }
          return ans;
      
    }
};