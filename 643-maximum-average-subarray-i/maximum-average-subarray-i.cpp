class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0,cnt=0;
        double avg=0;
        for(int i=0;i<k;i++){
           sum+=nums[i];
           
        }
        avg=(sum/k);
        cnt=avg;
        int l=0,j=k;
        while(j<nums.size()){
            sum+=nums[j];
            sum-=nums[l];
            avg=(sum/k);
            cout<<avg<<" ";
            while(j-l+1>k){
                l++;
            }
            cnt=max(cnt,avg);
            j++;
        }
        return cnt;

    }
};