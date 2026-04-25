class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int curr=0;
        int mprofit=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                curr=prices[j]-prices[i];
                mprofit=max(mprofit,curr);
            }
        }
        return mprofit;
        
    }
};
