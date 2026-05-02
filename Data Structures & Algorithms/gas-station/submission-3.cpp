class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        // vector<pair<int,int>>val;

        // for(int i=0;i<n;i++){
        //     val.push_back({gas[i],cost[i]});
        // }
        // sort(val.begin(),val.end());

        // int ans=-1;

        int g_sum=accumulate(gas.begin(),gas.end(),0);
        int c_sum=accumulate(cost.begin(),cost.end(),0);
        if(g_sum<c_sum){
            return -1;
        }

        int total=0;
        int ans=0;
        for(int i=0;i<n;i++){
            total+=(gas[i]-cost[i]);
            if(total<0){
                total=0;
                ans=i+1;
            }
        }
        return ans;
       

        
    }
};
