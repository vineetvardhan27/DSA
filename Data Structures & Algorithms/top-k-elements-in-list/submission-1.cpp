class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //  priority queue Question (nlog k)

        unordered_map<int,int>cnt;

        vector<vector<int>>frq(nums.size()+1);

        for(int n:nums){
            cnt[n]=1+cnt[n];
        }

        for(const auto& it:cnt){
            frq[it.second].push_back(it.first);
        }

        vector<int>ans;

        for(int i=frq.size()-1;i>0;--i){
            for(int n : frq[i]){
                ans.push_back(n);
                if(ans.size()==k){
                    return ans;
                }
            }
        }
        return ans;
        
    }
};
