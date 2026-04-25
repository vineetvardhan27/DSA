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
    int countSubstrings(string s) {
        int n=s.size();
        int cnt=0;

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                string temp=val(s,i,j);
                if(IsPal(temp)){
                    cnt++;
                }
            }
        }

        return cnt;


       
    }
};
