class Solution {
public:
    int  removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int ans=0;
        // unordered_map<int,int>mp;
        // int ans=0;
        // for(auto num:nums){
        //     mp[num]++;
        // }
        // for(auto temp:mp){
        //     if(temp.second==val){
        //         ans+=val;
        //     }
        //     else if(temp.second<val){
        //         ans+=temp.second;
        //     }
        //     else{
        //         ans+=0;
        //     }
        // }
        // return ans;
        vector<int>a;

        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                ans++;
                a.push_back(nums[i]);
            }
            
        } 
        for(int i=0;i<ans;i++){
            nums[i]=a[i];
        }
        return ans;
        
        
    }
};