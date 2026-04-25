class Solution {
public:
  int hel(int n){
    string s="";
    while(n>0){
        s+=n%2+'0';
        n/=2;
    }
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            cnt++;
        }
    }
    return cnt;
  }
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++){
           
            ans.push_back(hel(i));
        }
        return ans;
        // cout<<hel(4);
        // return {};
        
    }
};
