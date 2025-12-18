class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int k=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]>0){
        //         int x=*min_element(nums.begin(),nums.end());
        //         k++;
        //         nums[i]=nums[i]-x;
        //     }
        //     if(count(nums.begin(),nums.end(),0)==nums.size()){
        //         break;
        //     }
        // }
        // return k;
        set<int>arr;
        for(int i=0;i<nums.size();i++){
            arr.insert(nums[i]);
        }
        int c=0;
        for(auto &i:arr){
            if(i>0){
                c++;
            }
        }
        return c;
    }
};