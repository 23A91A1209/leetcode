class Solution {
public:
    string reversePrefix(string word, char ch) {
        int found=word.find(ch);
        if(found!=word.find(ch)){
            return word;
        }
        reverse(word.begin(),word.begin()+found+1);
        return word;
    }
};