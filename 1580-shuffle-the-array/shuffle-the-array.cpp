class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>x;
        for(int i=0;i<n;i++){
            x.push_back(nums[i]);
            
        }
        vector<int>arr;
        for(int i=n;i<nums.size();i++){
            arr.push_back(nums[i]);
        }
        int k=0,m=0;
        for(int j=0;j<nums.size();j++){
            if(j%2==0){
              nums[j]=x[k++];   
            }
            else{
                nums[j]=arr[m++];
            }
        }
        return nums;
    }
};