class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0,j=0;
        int nzero=0,n_ones=0;
        int maxi=INT_MIN;
        while(j<nums.size()){
            if(nums[j]==0){
                nzero++;
            }
            else{
                n_ones++;
            }
            if(nzero==1) maxi=max(maxi,j-i+1);
            while(nzero>1){
                if(nums[i]==0){
                    nzero--;
                }
                else{
                    n_ones--;
                }
                i++;
            }
            maxi=max(maxi,j-i+1);
            j++;
        }
        return maxi-1;
    }
};