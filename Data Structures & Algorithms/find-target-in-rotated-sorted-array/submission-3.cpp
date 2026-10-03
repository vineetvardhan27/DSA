class Solution {
public:
 
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;

            //  3 4 5 6 1 2  target = 1 
            //  3 5 6 0 1 2  target = 4

            if(nums[mid]==target){
                return mid;
            }
            
           
            if(nums[low]<=nums[mid]){
               
               if(target>nums[mid] || target<nums[low]){
                low=mid+1;
               }
               else{
                high=mid-1;
               }

            }
            else{

                if(target<nums[mid]|| target>nums[high]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }

            }
          
            
        }

        return -1;
       
    }
};
