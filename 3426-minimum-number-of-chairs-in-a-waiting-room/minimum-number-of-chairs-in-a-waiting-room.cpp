class Solution {
public:
    int minimumChairs(string s) {
        int cnt=0;
        int maxi=INT_MIN;
        for(char &i:s){
            if(i=='E'){
               cnt++;
            }
            else if(i=='L'){
                cnt--;
            }
            maxi=max(maxi,cnt);
        }
        return maxi;
    }
};