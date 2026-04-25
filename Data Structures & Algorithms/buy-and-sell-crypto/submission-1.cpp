class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n=nums.size();
        int mini=nums[0];
        int profit=0;
        for(int i=0;i<n;i++){
            profit=max(profit,nums[i]-mini);
            mini=min(mini,nums[i]);
        }
        return profit;

        
    }
};
