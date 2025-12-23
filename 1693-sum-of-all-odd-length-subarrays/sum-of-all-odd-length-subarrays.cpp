class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
           int n=arr.size();
           int totalsum=0;
           for(int i=0;i<arr.size();i++){
              int r;
              if(i==0) r=arr.size()-i;
              else r=(i+1)*(arr.size()-i);
              totalsum+=ceil(r/2.0)*arr[i];

           }
            
           
           return totalsum;
        
        }
};