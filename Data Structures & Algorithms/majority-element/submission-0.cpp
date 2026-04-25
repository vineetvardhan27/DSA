class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(auto num:nums){
            mp[num]++;
        }
        int ans=0;
        for(auto temp:mp){
            if(temp.second>n/2){
                ans=temp.first;
            }
        }
        return ans;
        
    }
};