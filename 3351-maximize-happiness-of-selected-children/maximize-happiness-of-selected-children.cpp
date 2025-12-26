class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.rbegin(),happiness.rend());
        int n=happiness.size();
        long long s=0;
        for(int i=0;i<k;i++){
            if(happiness[i]-i>0){
                s+=happiness[i]-i;
            }
        }
        return s;
    }
};