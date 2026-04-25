class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(auto num:nums){
            mp[num]++;
        }
        vector<int>ans;
        for(auto temp:mp){
            if(temp.second>n/3){
                ans.push_back(temp.first);
            }
        }
        return ans;
        
    }
};