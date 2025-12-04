class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<pair<int,int>>ans;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                     ans.push_back({i,j});
                }
            }
        }
        return ans.size();
    }
};