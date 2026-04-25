class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0){
            return 0;
        }
        unordered_set<char>charset;
        int l=0;
        int r=0;

        for(int i=0;i<s.length();i++){
             while(charset.find(s[i])!=charset.end())
             {
                charset.erase(s[l]);
                l++;

             }
             charset.insert(s[i]);
             r=max(r,i-l+1);
        }
        return r;
        
    }
};
