class Solution {
public:
    int coinChange(vector<int>& c, int a) {
        int n=c.size();
        int ans=0;
        vector<int>dp(a+1,a+1);
        dp[0]=0;
        for(int i=1;i<=a;i++){
            for(int j=0;j<n;j++){
                if(c[j]<=i){
                    dp[i]=min(dp[i],dp[i-c[j]]+1);
                }
            }
        }
        return dp[a]>a?-1:dp[a];
        
    }
};
