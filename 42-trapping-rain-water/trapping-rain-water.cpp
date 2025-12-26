class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0;
      vector<int>l(height.size());
      vector<int>r(height.size());
      r[0]=height[0];
      for(int i=1;i<height.size()-1;i++){
         r[i]=max(height[i],r[i-1]);
      }
      l[height.size()-1]=height[height.size()-1];
      for(int i=height.size()-2;i>=0;i--){
        l[i]=max(height[i],l[i+1]);
      }
      for(int i=1;i<height.size()-1;i++){
         ans+=min(l[i],r[i])-height[i];
      }
      return ans;
    }
};