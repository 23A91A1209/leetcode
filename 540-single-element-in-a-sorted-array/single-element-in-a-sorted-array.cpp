class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>result;
        for(int i=0;i<nums.size();i++){
            result[nums[i]]++;
        }
        int single=0;
        for(auto &i:result){
            if(i.second==1){
               single=i.first;
            }
        }
        return single;
    }
};