class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        for(auto num:nums){
            mp[num]++;
        }
        int k=0;
        vector<int>dup;

        for(auto it:mp){
             if(it.second>=1){
                k++;
                dup.push_back(it.first);
             }
        }

        while(nums.size()){
            nums.pop_back();
        }
        for(int i=0;i<dup.size();i++){
            nums.push_back(dup[i]);
        }
        return k;
        
    }
};