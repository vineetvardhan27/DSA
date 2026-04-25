class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int n=nums.size();
        int res=nums[0];
        int ans=1;
        int sol=1;

        for(int i=0;i<n;i++){
            // ans*=nums[i];
            // sol=max(sol,ans);
            // if(ans<=0){
            //     ans=1;
            // }

            int tem=ans* nums[i];

            ans=max(max(nums[i]*ans,nums[i]*sol), nums[i]);

            sol=min(min(tem,nums[i]* sol),nums[i]);

            res=max(res,ans);

        }
        return res;
        
    }
};
