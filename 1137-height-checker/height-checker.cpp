class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int c=0;
        vector<int> duplicate=heights;
        sort(duplicate.begin(),duplicate.end());
        for(int i=0;i<heights.size();i++)
        {
           if(duplicate[i]!=heights[i])
           {
            c++;
           }
            
        }
        return c;

    }
};