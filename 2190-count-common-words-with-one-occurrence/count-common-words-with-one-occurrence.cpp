class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string,int>mp_1;
        map<string,int>mp_2;
        for(int i=0;i<words1.size();i++){
            mp_1[words1[i]]++;
        }
        for(int j=0;j<words2.size();j++){
            mp_2[words2[j]]++;
        }
        int count=0;
        for(auto k:mp_1){
            for(auto p:mp_2){
                if(k.first==p.first && k.second==1 && p.second==1){
                    count++;
                }
            }
        }
        return count;
    }
};