class Solution {
public:
    string reverseOnlyLetters(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])){
                st.push(s[i]);
            }
        }
        for(int j=0;j<s.size();j++){
            if(isalpha(s[j])){
                s[j]=st.top();
                st.pop();
            }
        }
        return s;
    }
};