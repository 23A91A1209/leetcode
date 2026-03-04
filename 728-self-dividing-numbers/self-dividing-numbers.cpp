class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
         
       vector<int>res;
       for(int i=left;i<=right;i++)
       {
        int num=i;
        bool s=true;
        while(num>0)
        {
            int n=num%10;
            if(n==0||i%n!=0)
            {
                s=false;
                break;
            }
            num/=10;
        }
         if(s)
         {
           res.push_back(i);
         }
       }
       return res;
    }
};