class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>smap;
        map<char,int>tmap;
        for(char i:s){
            smap[i]++;
        }
        for(char j:t){
            tmap[j]++;
        }
         
        for(char i='a';i<='z';i++){
            int freq1=smap[i];
            int freq2=tmap[i];

            if(freq1!=freq2){
                return false;
            }
        }
        return true;
     
    }
};