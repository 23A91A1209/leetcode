class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
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
            if(nzero<=k) maxi=max(maxi,j-i+1);
            while(nzero>k){
                if(nums[i]==1){
                    n_ones--;
                }
                else{
                    nzero--;
                }
                i++;
                maxi=max(maxi,j-i+1);
            }
            // maxi=max(maxi,j-i+1);
            j++;

        }
        return maxi;
    }
};