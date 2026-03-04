class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>arr;
        int i=0,j=0,ans=0;
        while(j<s.size()){
            while(arr.contains(s[j])){
                arr.erase(s[i]);
                i++;
            }
            arr.insert(s[j]);
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};