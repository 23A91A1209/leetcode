class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        set<int>arr;
        for(int i=0;i<nums.size();i++){
            arr.insert(nums[i]);
        }
        
        int c=0;
        for(int i=0;i<nums.size();i++){
            set<int>ans;
            for(int j=i;j<nums.size();j++){
               ans.insert(nums[j]);
               if(ans.size()==arr.size()){
                  c++;
               }
            }
           
            
        }
        return c;
    }
};