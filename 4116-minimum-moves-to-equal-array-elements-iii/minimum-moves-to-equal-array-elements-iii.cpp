class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int moves=0;
        for(int i=0;i<nums.size();i++){
            moves+=nums[n-1]-nums[i];
        }
        return moves;
    }
};