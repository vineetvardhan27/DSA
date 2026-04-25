class Solution {
public:
  bool IsPal(string s){
    int i=0;
    int j=s.size()-1;
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
  }
  string val(string s,int l,int h){
    string ans="";
    for(int i=l;i<=h;i++){
        ans+=s[i];
    }
    return ans;
  }
  string lon(vector<string>ans){
      int n=ans.size();
      int mx=0;
      string sol="";
      for(int i=0;i<n;i++){
        int t=ans[i].size();
        mx=max(mx,t);
      }
      for(int i=0;i<n;i++){
        int t=ans[i].size();
        if(t==mx){
            sol=ans[i];
            break;
        }
      }
      return sol;
  }
    string longestPalindrome(string s) {
        int n=s.size();
        vector<string>ans;
        //  ababd 
        //  return "";
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                string temp=val(s,i,j);
                // cout<<temp<<" "<<endl;
                if(IsPal(temp)){
                    ans.push_back(temp);
                }
            }
        }
       
       
        // int m=ans.size();
        // for(int i=0;i<ans.size();i++){
        //     cout<<ans[i]<<" ";
        // }
        string answer=lon(ans);

        // cout<<endl;
        // return ans[m-1];
        return answer;
    }
};
