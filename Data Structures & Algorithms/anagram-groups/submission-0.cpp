class Solution {
public:
  bool anagram(string s,string t){
    int n=s.size();
    int m=t.size();
    if(n!=m){
        return false;
    }
    vector<int>v(26,0);
    for(int i=0;i<n;i++){
        v[s[i]-'a']++;
        v[t[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(v[i]!=0){
            return false;
        }
    }
    return true;

  }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        int n=strs.size();
        vector<bool>hel(n,false);
        for(int i=0;i<n;i++){
            if(hel[i]) continue;
            vector<string>gro;
            gro.push_back(strs[i]);
            hel[i]=true;
            for(int j=i+1;j<n;j++){
               
                if(!hel[j] && anagram(strs[i],strs[j])){
                   gro.push_back(strs[j]);
                   hel[j]=true;
                }

            }
            ans.push_back(gro);


        }
        return ans;


        
    }
};
