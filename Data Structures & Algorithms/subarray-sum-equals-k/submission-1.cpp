class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        // int cnt=0;
        // int sum=0;
        // for(int i=0;i<n;i++){
        //     sum=0;
        //     for(int j=i;j<n;j++){
        //         sum+=nums[j];
        //         if(sum==k){
        //             cnt++;
        //         }
        //     }
        // }
        // return cnt;

        int ans=0;
        int cur_sum=0;
        unordered_map<int,int>pre;
        pre[0]=1;

        for(auto num:nums){
            cur_sum+=num;
            int diff=cur_sum-k;
            ans+=pre[diff];
            pre[cur_sum]++;
        }
        return ans;
    }
};