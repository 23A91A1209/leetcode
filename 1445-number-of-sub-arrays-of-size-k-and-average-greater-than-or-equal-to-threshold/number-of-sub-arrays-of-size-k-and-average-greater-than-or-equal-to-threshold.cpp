class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum=0,c=0;
       for(int i=0;i<k;i++){
        sum+=arr[i];
       }
       if((sum/k)>=threshold){
        c++;
       }
       int i=0,j=k;
       while(j<arr.size()){
            sum+=arr[j];
            sum-=arr[i];
            if((sum/k)>=threshold){
                    c++;
            }
            i++;
            j++;
       }
       return c;
    }
};