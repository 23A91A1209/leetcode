class Solution {
public:
    bool makeEqual(vector<string>& words) {
      
        unordered_map<char,int>ans;
        for(int i=0;i<words.size();i++){
            string var=words[i];
            for(int j=0;j<var.size();j++){
                ans[var[j]]++;
            }
        }
        int m=0;
        vector<int>arr;
        for(auto k:ans){
           if(k.second%words.size()!=0){
             return false;
           }
        }
       
        return true;
        
    }
};