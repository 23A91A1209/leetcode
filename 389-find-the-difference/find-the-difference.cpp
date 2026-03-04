class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum=0;
        int sun=0;
        for(auto i:s)
        {
            sum+=i;
        }
        for(auto j:t)
        {
            sun+=j;
        }
        return char(sun-sum);
    }
};