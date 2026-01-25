class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(k==1) return 0;
        sort(nums.begin(),nums.end());
        int i=0,j=k-1,ans=INT_MAX;
        while(j<nums.size()){
            ans=min(ans,nums[j]-nums[i]);
            j++;
            i++;
        }
        return ans;
    }
};