class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //hashset 
        unordered_set<int>d;
        for(int i=0;i<nums.size();i++){
            if(d.find(nums[i])!=d.end()){
                return true;
            }
            d.insert(nums[i]);
        }
       return false;
    }
};
