class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
       unordered_map<int,int>mp;
       unordered_map<int,int>m_p;
       for(int i:nums1){
        mp[i]++;
       }
       for(int j:nums2){
         m_p[j]++;
       }
       vector<int>arr;
       for(auto p:mp){
          for(auto k:m_p){
            if( p.first==k.first){
                int freq=min(p.second,k.second);
                while(freq--){
                    arr.push_back(p.first);
                }
                
            }
          }
       }
       return arr;
    }
};