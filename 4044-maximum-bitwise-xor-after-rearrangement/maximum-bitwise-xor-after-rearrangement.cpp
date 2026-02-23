class Solution {
public:
    string maximumXor(string s, string t) {
        int o_count=0,z_count=0;
        for(int i=0;i<t.size();i++){
          if(t[i]=='1'){
            o_count++;
          }
          else{
            z_count++;
          }
        }
        string res="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                if(z_count>0){
                    res+='1';
                    z_count--;
                }
                else{
                    res+='0';
                    o_count--;
                }
            }
            else{
                if(o_count>0){
                    res+='1';
                    o_count--;

                }
                else{
                    res+='0';
                    z_count--;
                }
            }
        }
        return res;

    }
};