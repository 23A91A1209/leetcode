class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr;
        vector<int>ar;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                arr.push_back(nums[i]);
            }
            else if(nums[i]<0){
               ar.push_back(nums[i]);
            }
        }
        vector<int>ans(n);
        int k=0,m=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0){
                ans[i]=arr[k];
                k++;
            }
            else{
                ans[i]=ar[m];
                m++;
            }
        }
        return ans;
        
    }
};