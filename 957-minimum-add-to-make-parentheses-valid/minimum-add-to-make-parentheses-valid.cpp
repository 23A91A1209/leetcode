class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        st.push(s[0]);
        int count=0;
        for(int i=1;i<s.size();i++){
           if(!st.empty() && st.top()=='(' && s[i]==')') st.pop();
           else if(s[i]=='('){
             st.push(s[i]);
           }
           else{
             count++;
           }
        }
        return st.size()+count;
    }
};