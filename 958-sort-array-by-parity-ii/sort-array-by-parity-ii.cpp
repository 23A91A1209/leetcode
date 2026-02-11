class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>even;
        vector<int>odd;
        for(int x:nums){
            if(x%2==0){
                even.push_back(x);
            }
            else{
                odd.push_back(x);
            }
        }
        vector<int>arr(nums.size());
        int e=0,o=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
              arr[i]=even[e++];
            }
            else{
                arr[i]=odd[o++];
            }
        }
        return arr;
    }
};