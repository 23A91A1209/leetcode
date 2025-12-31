class Solution {
public:
    bool isvowel(char ch){
         return ch=='a'|| ch=='e' || ch=='i'|| ch=='o' || ch=='u';
           
    }
    int c=0,ans=INT_MIN;
    int maxVowels(string s, int k) {
        for(int i=0;i<k;i++){
            if(isvowel(s[i])){
                c++;
            }
        }
         ans=c;
        int l=0,r=k;
        while(r<s.size()){
            if(isvowel(s[r])){
                c++;
            }
            if(isvowel(s[l])){
                c--;
            }
            ans=max(ans,c);
            r++;
            l++;
            
        }
        return ans;

    }
};