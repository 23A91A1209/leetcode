class Solution {
public:
    bool isvowel(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
    }
    string reverseVowels(string s) {
       string res="";
       for(char i:s){
          if(isvowel(i)){
            res+=i;
          }
       }
       reverse(res.begin(),res.end());
       int index=0;
       for(int i=0;i<s.size();i++){
          if(isvowel(s[i])){
             s[i]=res[index++];
          }
       }
       return s;
    }
};