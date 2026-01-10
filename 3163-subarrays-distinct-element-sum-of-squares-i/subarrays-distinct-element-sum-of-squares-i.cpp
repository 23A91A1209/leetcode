class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                map<int,int>ans;
                for(int k=i;k<=j;k++){
                   ans[nums[k]]++;
                }
                sum+=pow(ans.size(),2);
            }
            
        }
        return sum;
    }
};