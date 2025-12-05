class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefix(n);
        int left=0,right=0,c=0;
        prefix[0]=nums[0];
        for(int i=1;i<nums.size();i++){
           prefix[i]=prefix[i-1]+nums[i];
        }
        for(int i=1;i<nums.size();i++){  
          left=prefix[i-1];
          right=prefix[n-1]-prefix[i-1];
          if((left-right)%2==0){
               c++;
          }
        }
        return c;

    }
};