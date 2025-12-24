class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.rbegin(),capacity.rend());
        int applessum=0;
        for(int i=0;i<apple.size();i++){
            applessum+=apple[i];
        }
        int tot=0;
        for(int i=0;i<capacity.size();i++){
            tot+=capacity[i];
            if(tot>=applessum){
                
                return i+1;
            }
            
           
        }
        return -1;
    }
};