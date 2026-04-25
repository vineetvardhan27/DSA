class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
       int n=cost.size();
       int curr=0;
       int bck=0;
       int bck1=0;
       for(int i=2;i<=n;i++){
         curr=min(bck+cost[i-1],bck1+cost[i-2]);
         int temp=bck;
         bck=curr;
         bck1=temp;

       }
      
       return curr;
      
    }
};
