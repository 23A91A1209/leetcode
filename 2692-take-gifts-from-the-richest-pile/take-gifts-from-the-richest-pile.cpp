class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        sort(gifts.rbegin(),gifts.rend());
        for(int i=0;i<k;i++){
            gifts[0]=sqrt(gifts[0]);
            sort(gifts.rbegin(),gifts.rend());
        }
        
        long long  sgift=0;
        for(int i=0;i<gifts.size();i++){
           sgift+=gifts[i];
        }
        return sgift;
    }
};