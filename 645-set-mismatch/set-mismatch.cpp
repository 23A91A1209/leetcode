class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>arr;
        for(int i=0;i<nums.size();i++){
            arr.push_back(i+1);
        }
        nums.insert(nums.end(),arr.begin(),arr.end());
        sort(nums.begin(),nums.end());
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
            mp[nums[i]]++;
        }
        vector<int>res(2,0);
        for(auto k:mp){
            if(k.second==3){
               res[0]=k.first;
            }
            if(k.second==1){
                res[1]=k.first;
            }
        }
        return res;
    }
};