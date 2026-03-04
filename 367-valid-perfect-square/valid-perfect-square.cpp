class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num>0)
        {
            int x=sqrt(num);
            if((x*x)==num)
            {
                return true;
            }
        }
        return false;
    }
};