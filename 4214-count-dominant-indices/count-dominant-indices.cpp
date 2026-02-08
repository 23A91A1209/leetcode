class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int sum=0;
        int n=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int c=0;
        float avg=0;
        for(int i=0;i<nums.size()-1;i++){
            sum-=nums[i];
            avg=sum/n;
            if(nums[i]>avg){
                c++;
            }
            n--;
        }
        return c;
    }
};