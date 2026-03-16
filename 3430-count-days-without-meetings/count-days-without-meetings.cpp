class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());
        vector<vector<int>>ans;
        for(int i=0;i<meetings.size();i++){
            int start=meetings[i][0];
            int end=meetings[i][1];
           if(!ans.empty() && ans[ans.size()-1][1]>=end){
             continue;
           }
            for(int j=i+1;j<meetings.size();j++){
                if(meetings[j][0]<=end){
                    end=max(end,meetings[j][1]);
                }
            }
            ans.push_back({start,end});
        }
        int count=0;
        for(auto &v:ans){
            count+=(v[1]-v[0]+1);
        }
        return days-count;

    }
};