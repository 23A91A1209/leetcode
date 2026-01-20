class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int>arr;
        for(int i=1;i<=n;i++){
            if(n%i==0){
               arr.push_back(i);
            }
        }
        int ans=-1;
        for(int i=0;i<arr.size();i++){
            if((i+1)==k){
               ans=arr[i];
            }
        }
        return ans;
    }
};