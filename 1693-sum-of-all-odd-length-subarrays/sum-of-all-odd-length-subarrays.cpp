class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        vector<int>prefix(arr.size());
        prefix[0]=arr[0];
        for(int i=1;i<arr.size();i++){
            prefix[i]=prefix[i-1]+arr[i];
        }
        int totalsum=0;
        for(int i=0;i<arr.size();i++){
            for(int j=i;j<arr.size();j++){
                int sum=0;
                if((j-i+1)%2!=0){
                    if(i==0){
                    sum+=prefix[j];
                     }
                     else{
                        sum+=prefix[j]-prefix[i-1];
                     }
                   
                }
                
                totalsum+=sum;
            }
            
        }
        return totalsum;
    }
};