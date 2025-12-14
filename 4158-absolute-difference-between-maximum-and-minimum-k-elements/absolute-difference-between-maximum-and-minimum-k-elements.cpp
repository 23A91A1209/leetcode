class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int minsum=0,maxsum=0;
        for(int i=0;i<k;i++){
            minsum+=nums[i];
            maxsum+=nums[n-1-i];
        }
        return abs(maxsum-minsum);
    
    }
};