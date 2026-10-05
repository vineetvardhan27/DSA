class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();

        int ans=0;
        int cnt=0;
        unordered_set<int>st(nums.begin(),nums.end());
        for(int num:st){
            //  Finding the number -1 if that is in the set or not 
            if(!st.count(num-1)){
                int curr=num;
                cnt=1;

                while(st.count(curr+1)){
                    curr++;
                    cnt++;
                }

                ans=max(ans,cnt);   
            }
          
        }
        return ans;
        
    }
};
