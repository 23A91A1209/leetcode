class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>>res(r,vector<int>(c));
        vector<int>arr;
        int m=c*r;
        int ct=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                arr.push_back(mat[i][j]);
                ct++;
            }
        }
        if(ct!=m){
            return mat;
        }
        int k=0;
        // while(k<arr.size()){
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    res[i][j]=arr[k];
                    k++;
                }
            }
        // }
        return res;

    }
};