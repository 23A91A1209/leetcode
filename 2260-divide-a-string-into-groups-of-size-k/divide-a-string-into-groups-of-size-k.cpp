class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>arr;
        string res="";
        for(int i=0;i<s.size();i++){
            res+=s[i];
            if(res.size()==k){
                arr.push_back(res);
                res="";
            }   
        }
        if(res.size()>0){
            for(int i=0;i<k;i++){
                if(!res[i]){
                    res+=fill;
                }
            }
            arr.push_back(res);
        }
        return arr;
    }
};