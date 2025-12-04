class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>ican;
        int top=0,left=0,right=m-1,bottom=n-1;
        while(top<=bottom&& left<=right){
            //top
            for(int i=left;i<=right;i++){
                ican.push_back(matrix[top][i]);
            }
            top++;
            //right
            for(int i=top;i<=bottom;i++){
                ican.push_back(matrix[i][right]);
            }
            right--;

            if(top<=bottom){
                //bottom
                for(int i=right;i>=left;i--){
                    ican.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
                //left
                if(left<=right){
                    for(int i=bottom;i>=top;i--){
                        ican.push_back(matrix[i][left]);
                    }
                    left++;
                }
            
        }
        return ican;
    }
};