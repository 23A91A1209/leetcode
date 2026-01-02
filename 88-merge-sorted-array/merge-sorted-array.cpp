class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>arr(m+n);
        int s=0;
        int i=0,j=0;
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                arr[s++]=nums1[i];
                i++;
            }
            else{
                arr[s++]=nums2[j];
                j++;
            }
        }
        while(i<m){
            arr[s++]=nums1[i];
            i++;
        }
        while(j<n){
            arr[s++]=nums2[j];
            j++;
        }
        for(int k=0;k<m+n;k++){
             nums1[k]=arr[k];
        }
    }
};