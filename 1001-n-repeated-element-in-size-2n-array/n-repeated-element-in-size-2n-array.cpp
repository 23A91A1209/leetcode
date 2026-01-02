class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>arr;
        for(int i=0;i<nums.size();i++){
              arr[nums[i]]++;
        }
        int k=0;
        for(auto i:arr){
            if(i.second==nums.size()/2){
               k=i.first;
            }
        }
        return k;
    }
};