class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        while(stones.size()>1){
            sort(stones.begin(),stones.end());
            int x=stones.back();
            stones.pop_back();
            int y=stones.back();
            stones.pop_back();
            if(x!=y){
                int res=abs(x-y);
                stones.push_back(res);
                
            }
        }
        if(stones.size()==1){
            return stones[0];
        }
        return 0;
    }
};