class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=min(word1.size(),word2.size());
        int mx=max(word1.size(),word2.size());
        string ans="";
        for(int i=0;i<n;i++){
            ans.push_back(word1[i]);
            ans.push_back(word2[i]);
        }
        string temp;
        if(mx==word1.size()){
            temp=word1;
        }
        else{
            temp=word2;
        }
        for(int i=n;i<mx;i++){
            ans.push_back(temp[i]);
        }
        
        return ans;
    }
};