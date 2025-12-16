class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=0,target=0;
        for(int i:arr){
            sum+=i;
        }
        target=sum/3;
        int c=0,fsum=0;
        for(int i=0;i<arr.size();i++){
            fsum+=arr[i];
            if(fsum==target){
                fsum=0;
                c++;
            }
            if(c==2 && i!=arr.size()-1){
                int s=0;
                for(int j=i+1;j<arr.size();j++){
                    s+=arr[j];
                }
                if(s==target){
                    return true;
                }
                return false;
            }
        }
        return false;
    }
};