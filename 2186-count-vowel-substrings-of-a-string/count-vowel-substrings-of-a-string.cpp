class Solution {
public:
    bool isvowel(char c){
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
    }
    int countVowelSubstrings(string word) {
        int count=0;
        for(int i=0;i<word.size();i++){
            bool hasA=false,hasE=false,hasI=false,hasO=false,hasU=false;
            for(int j=i;j<word.size();j++){
                 if(!isvowel(word[j])){
                    break;
                 }
                 if(word[j]=='a') hasA=true;
                 if(word[j]=='e') hasE=true;
                 if(word[j]=='i') hasI=true;
                 if(word[j]=='o') hasO=true;
                 if(word[j]=='u') hasU=true;
                 if(hasA && hasE && hasI && hasO && hasU){
                    count++;
                 }
            }
        }
        return count;
    }
};