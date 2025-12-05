class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int es=0,os=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
               es+=nums[i];
            }
            else{
                os+=nums[i];
            }
        }
        return es-os;
    }
};