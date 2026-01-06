class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i!=j){
                    if(abs(nums[i]-nums[j])<=min(nums[i],nums[j])){
                       maxi=max(maxi,nums[i]^nums[j]);
                    }
                }
                
            }
        }
        if(maxi==INT_MIN){
            return 0;
        }
        return maxi;
    }
};