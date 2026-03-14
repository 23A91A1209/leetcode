class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        long long MOD=1e9+7;
        vector<long long>arr;
        // int sum=0;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                arr.push_back(sum);
            }
        }
        sort(arr.begin(),arr.end());
        for(int i=1;i<arr.size();i++){
            arr[i]=arr[i-1]+arr[i];
        }
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        if(left-1==0) return arr[right-1]%MOD;
        return arr[right-1]-arr[left-2]%MOD;
        
        

        // return 0;
    }
};