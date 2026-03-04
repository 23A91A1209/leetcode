class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()>nums2.size()){
            swap(nums1,nums2);
        }
        int n=nums1.size(),m=nums2.size();
        int l=0,h=nums1.size();
        while(l<=h){
            int cut1=l+(h-l)/2;
            int cut2=(n+m+1)/2-cut1;


            int L1=(cut1<=0) ?INT_MIN:nums1[cut1-1];
            int L2=(cut2<=0)?INT_MIN:nums2[cut2-1];
            int R1=(cut1>=n)?INT_MAX:nums1[cut1];
            int R2=(cut2>=m)?INT_MAX:nums2[cut2];
            if(L1<=R2 && L2<=R1){
                double ans=max(L1,L2);
                if((n+m)%2==0) ans=(ans+min(R1,R2))/2.0;
                return ans;
            }
            else if(L1>R2){
                h=cut1-1;
            }
            else{
                l=cut1+1;
            }

        }
        return 0;
    }
};