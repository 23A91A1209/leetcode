class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i=0,j=0;
        int pro=1,ans=0;
        while(j<nums.size()){
              pro*=nums[j];
              cout<<pro;
              while(i<=j && pro>=k){
                pro/=nums[i];
                i++;
              }
              ans+=j-i+1;
              j++;
            //   cout<<pro;
              
        }
        return ans;
    }
};