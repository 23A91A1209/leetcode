class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0,right=numbers.size()-1;
        vector<int>arr;
        int sum=0;
        while(left<right){
           sum=numbers[left]+numbers[right];
           if(sum==target){
             arr.push_back(left+1);
             arr.push_back(right+1);
             break;
           }
           else if(sum<target){
             left++;
           }
           else{
            right--;
           }
        }
        return arr;
    }
};