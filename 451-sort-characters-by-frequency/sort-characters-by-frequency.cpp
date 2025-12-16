class Solution {
public:
    string frequencySort(string s) {
       map<char,int>arr;
       for(auto i:s){
           arr[i]++;
       }
       vector<pair<int,char>>ans;;
       for(auto p:arr){
           ans.push_back({p.second,p.first});
       }
       sort(ans.rbegin(),ans.rend());
       string res="";
       for(auto k:ans){
           int freq=k.first;
           while(freq--){
              res+=k.second;
           }
       }
       return res;
    }
};