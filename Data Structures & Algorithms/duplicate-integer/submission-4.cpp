class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        set<int>num(nums.begin(),nums.end());
        int t=num.size();
        return n!=t;
        
    }
};