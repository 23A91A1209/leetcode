class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int cnt=0;
            for(int i=0;i<words.size();i++){
                string  rev=words[i];
                reverse(rev.begin(),rev.end());
                for(int j=i+1;j<words.size();j++){
                    if(rev==words[j]){
                      cnt++;
                    }

                }
            }
            return cnt;
         }
};