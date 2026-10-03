class Solution {
public:
   int Binary_Search(vector<int>&nums,int low,int high,int target){
    while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
   }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<high){
            int mid=low+(high-low)/2;
            if(nums[mid]>nums[high]){
                low=mid+1;
            }
            else if(nums[mid]<nums[high]){
                high=mid;
            }
            
        }
        int part=low;
        cout<<part;
        if(part==0){
            return Binary_Search(nums,part,n-1,target);
        }
        int first_part=Binary_Search(nums,0,part-1,target);
        int second_part=Binary_Search(nums,part,n-1,target);
        

        if(first_part==-1 && second_part==-1){
            return -1;
        }
        
        return max(first_part,second_part);
        
    }
};
