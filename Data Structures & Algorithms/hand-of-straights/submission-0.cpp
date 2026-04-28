class Solution {
public:
    bool isNStraightHand(vector<int>& nums, int k) {
        int n=nums.size();
        if(n%k!=0){
            return false;
        }
        map<int,int>mp;
        for(auto num:nums){
            mp[num]++;
        }
        priority_queue<int,vector<int>,greater<int>> min_heap;
        //  Insertion of element in heap
        for(auto& it:mp){
            min_heap.push(it.first);
        }

        while(!min_heap.empty()){
            int mn=min_heap.top();

            for(int i=mn;i<mn+k;i++){
                if(mp.find(i)==mp.end())
                return false;
                mp[i]-=1;

                if(mp[i]==0){
                    if(i!=min_heap.top())
                    return false;
                    min_heap.pop();
                }
            }

        }

        return true;
       


        
    }
};
