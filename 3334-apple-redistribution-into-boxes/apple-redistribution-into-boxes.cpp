class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.rbegin(),capacity.rend());
        int applessum=0;
        for(int i=0;i<apple.size();i++){
            applessum+=apple[i];
        }
        for(int i=0;i<capacity.size();i++){
            applessum-=capacity[i];
            if(applessum<=0){
                return i+1;
            }
           
        }
        return -1;
    }
};