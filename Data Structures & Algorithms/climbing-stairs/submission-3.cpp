class Solution {
public:
    int climbStairs(int n) {
      //  Can you optimize this 

      // vector<int>dp(n+1);
      // dp[0]=1;
      // dp[1]=2;
      if(n<=2){
        return n;
      }
      int prev=1;
      int curr=2;
      int frw=0;
      
      for(int i=2;i<n;i++){
          frw=curr+prev;
          prev=curr;
          curr=frw;   
      }
      return frw;

    }
};
