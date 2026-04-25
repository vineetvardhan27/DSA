class Solution {
public:
    int supp(vector<int>&nums,int l,int h){
        int mx=INT_MIN;
        for(int i=l;i<=h;i++){
            mx=max(nums[i],mx);

        }
        return mx;
    }
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    
        int n=nums.size();
        int l=0;
        int h=k-1;
        if(n==1 && k==1){
            return {nums[0]};
        }
       vector<int>t;
        while(h<n){
           t.push_back(supp(nums,l,h));
           l++;
           h++;
        }
        return t;
        
    }
};
