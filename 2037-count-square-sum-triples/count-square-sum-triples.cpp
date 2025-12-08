class Solution {
public:
    int countTriples(int n) {
        int cnt=0;
        for(int i=1;i<=n;i++){
           for(int j=1;j<=n;j++){
              if(j!=i){
                for(int k=1;k<=n;k++){
                    if(k!=j){
                        if(pow(i,2)+pow(j,2)==pow(k,2)){
                            cnt++;
                        }
                    }
                }
              }
            }

        } 
        
        return cnt;
        
    }
};