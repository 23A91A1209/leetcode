class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int steps=0,c=capacity;
        for(int i=0;i<plants.size();i++){
            if(plants[i]<=c){
                
                steps++;
                c-=plants[i];
            }
            else{
               steps+=((i+1)*2)-1;
               c=capacity-plants[i];
            }
        }
        return steps;
    }
};