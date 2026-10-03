class Solution {
public:
    int findMin(vector<int> &nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int min_element=0;
        if(n==1){
            return nums[0];
        }


        while(low<high){
            int mid=low+(high-low)/2;
            
            //  3 4 5 6 1 2
            if(nums[mid]>nums[high]){
                low=mid+1;
            }
            else if(nums[mid]<nums[high]){
                high=mid;
            }
           
           
        }
        return nums[low];
        
        
    }
};
