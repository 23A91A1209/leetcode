class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n=nums.size();
        vector<long long>prefix(n);
        prefix[0]=nums[0]*2;
        int maxi=nums[0];
        for(int i=1;i<nums.size();i++){
           maxi=max(maxi,nums[i]);
           prefix[i]=prefix[i-1]+(maxi+nums[i]);
           

        }
        return prefix;
        
    }
};