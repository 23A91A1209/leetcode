class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        int maxsum=INT_MIN;
        while(i<=j){
             maxsum=max(maxsum,nums[i]+nums[j]);
             j--;
             i++;
        }
        return maxsum;
    }
};