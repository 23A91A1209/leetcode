class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int cnt=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                bool mark=0;
                for(int k=0;k<grid.size();k++){
                    if(grid[i][k]!=grid[k][j]){
                        mark=1;
                        break;
                    }
                }
                if(mark==0){
                    cnt++;
                }
            }
            
        }
        return cnt;
    }
};