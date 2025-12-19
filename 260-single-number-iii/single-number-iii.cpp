class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int,int>arr;
        for(int i:nums){
            arr[i]++;
        }
        vector<int>ans;
        for(auto k:arr){
            if(k.second==1){
               ans.push_back(k.first);
            }
        }
        return ans;
    }
};