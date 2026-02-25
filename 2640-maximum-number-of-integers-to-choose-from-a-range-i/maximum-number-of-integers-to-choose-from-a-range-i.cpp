class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        // int total_sum=n*(n+1)/2;
        // int total_sum=0;
        int l=1,h=n;
        int count=0;
        set<int>ban(banned.begin(),banned.end());
        while(l<=h){
            int mid=l+(h-l)/2;
            long long banned_sum=0;
            if(mid==1) return 0;
            int c=0;
            for(int i:ban){
                if(i<=mid){
                   banned_sum+=i;
                   c++;
                }
            }
            long long total_sum=mid*(mid+1)/2;
            if(total_sum-banned_sum<=maxSum){
                count=mid-c;
                l=mid+1;
            }
            else{
                h=mid-1;
            }

            
        }
        return count;
    }
};