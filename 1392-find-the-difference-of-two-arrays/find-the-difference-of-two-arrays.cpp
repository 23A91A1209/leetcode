class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>set1(nums1.begin(),nums1.end());
        unordered_set<int>set2(nums2.begin(),nums2.end());
        vector<int>one,two;
        for(int i:set1){
            if(set2.find(i)==set2.end(i)){
                one.push_back(i);
            }
        }
        for(int j:set2){
            if(set1.find(j)==set1.end()){
                two.push_back(j);
            }
        }
        return {one,two};
    }
};