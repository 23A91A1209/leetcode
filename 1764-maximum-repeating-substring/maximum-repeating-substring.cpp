class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int c=0;
        string repeated=word;    
        while(sequence.find(repeated)!=-1){
            c++;
            repeated+=word;
        }
        return c;
    }
};