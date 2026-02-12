class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int>arr;
        for(int i=0;i<edges.size();i++){
            for(int j=0;j<edges[0].size();j++){
                arr[edges[i][j]]++;
            }
        }
        int ans=0;
        for(auto p:arr){
            if(p.second==edges.size()){
                 ans=p.first;
            }
        }
        return ans;
    }
};