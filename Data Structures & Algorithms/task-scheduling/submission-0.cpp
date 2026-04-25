class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int size=tasks.size();

       unordered_map<char,int>mp;
       for(int num:tasks){
        mp[num-'A']++;
       }
       int mx_el=0;
       int count_mx_el=0;
       for(auto& temp:mp){
           mx_el=max(mx_el,temp.second);
       }
       for(auto& tem:mp){
        if(mx_el==tem.second){
            count_mx_el++;
        }
       }
       int cost=(mx_el-1)*(n+1)+count_mx_el;
       return max(size,cost);

        
    }
};
