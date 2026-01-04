class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        int i=0;
        while(i<nums.size()){
            int sum=0,count=0;
            int h=nums[i];
            for(int j=1;j*j<=h;j++){
                if(h%j==0){
                    int d=h/j;
                    if(j==d){
                        count+=1;
                        sum+=j;
                    }
                    else{
                        count+=2;
                        sum+=j+d;
                    }
                    if(count>4) break;
                }
            }
            if(count==4){
                ans+=sum;
            }
            i++;
            
        }
        return ans;
    }
};