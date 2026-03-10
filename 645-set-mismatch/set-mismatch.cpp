class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
       vector<int>res(2);
       vector<int>freq(n+1,0);
       for(int x:nums){
         freq[x]++;
       }

       for(int i=0;i<=n;i++){
        if(freq[i]==2) res[0]=i;
        if(freq[i]==0) res[1]=i;

       }
       return res;
    }
};