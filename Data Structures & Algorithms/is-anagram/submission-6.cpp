class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m){
            return false;
        }

        vector<int>val(26,0);

        for(int i=0;i<n;i++){
            val[s[i]-'a']++;
            val[t[i]-'a']--;
        }

        for(int i=0;i<26;i++){
            if(val[i]!=0){
                return false;
            }
        }
        
        return true;
        
    }
};
