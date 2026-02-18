class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>LIS;
        for(int i=0;i<nums.size();i++){
            if(i==0){
                LIS.push_back(nums[i]);
            }
            else{
                if(LIS.back()<nums[i]){
                    LIS.push_back(nums[i]);
                }
                else{
                    int index=lower_bound(LIS.begin(),LIS.end(),nums[i])-LIS.begin();
                    LIS[index]=nums[i];
                }
            }
        }
        return LIS.size();
    }
};