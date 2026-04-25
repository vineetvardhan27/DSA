class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        for(int i=0;i<m;i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());

        int s=nums1.size();
        if(s%2==1){
            return nums1[(s/2)];
        }
        //  1 2 3 4 
        int l=nums1[(s/2)];
        int h=nums1[(s/2)-1];
        double ans=(l+h)/2.0;
        // cout<<l<<" "<<h;
        return ans;
    }
};
