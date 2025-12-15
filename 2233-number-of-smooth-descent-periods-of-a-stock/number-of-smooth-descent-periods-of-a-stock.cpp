class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long ans=0, c=1;
        for(int i=1;i<prices.size();i++){
            if(prices[i-1]>prices[i] && prices[i-1]-prices[i]==1){
                c++;
            }
            else{
                ans+=(c*(c+1))/2;
                c=1;
            }

        }
        long long h=(c*(c+1))/2;
        return ans+h;
    }
};