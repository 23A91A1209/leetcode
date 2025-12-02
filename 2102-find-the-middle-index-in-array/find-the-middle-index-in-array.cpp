class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
       int n=nums.size();
       vector<int>prefix(n);
       prefix[0]=nums[0];
       for(int i=1;i<n;i++){
         prefix[i]=prefix[i-1]+nums[i]; 
       }
       int left=0,right=0;
       for(int i=0;i<n;i++){
         left==0?i==0:prefix[i-1];
         right=prefix[n-1]-prefix[i];

         if(left==right) return i;

         left+=nums[i];
       }
       return -1;
    }
};