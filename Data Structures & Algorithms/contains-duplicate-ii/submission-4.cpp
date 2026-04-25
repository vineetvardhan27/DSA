class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        int val=0;
        unordered_map<int,int>mp;
        for(auto num:nums){
            mp[num]++;
        }
        for(auto temp:mp){
            if(temp.second>=2){
                val=temp.first;
                break;
            }
        }
        // cout<<val<<endl;
        vector<int>a;
        for(int i=0;i<n;i++){
           if(nums[i]==val){
            a.push_back(i);
           }
        }
        // for(int i=0;i<n;i++){
        //     if(nums[i]==val && cnt==1){
        //         e=i;
        //         cnt++;
        //         break;
        //     }
        // }
        if(a.size()<2){
          return false;
        }
        for(int i=0;i<a.size()-1;i++){
            int diff=abs(a[i]-a[i+1]);
            if(diff<=k){
                return true;
            }
        }

        // int mx=*max_element(a.begin(),a.end(),0);
        // int mn=*min_element(a.begin(),a.end(),0);
        // if(abs(mx-mn)<=k){
        //     return 
        // }
        // cout<<s<<" "<<e<<endl;
        // if(abs(s-e)<=k && cnt>=2){
        //      return true;
        //  }
        return false;
        
    }
};