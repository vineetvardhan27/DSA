class Solution {
public:
   bool IsPal(string s,int l,int h){
    int n=s.size();
   
    while(l<h){
        if(s[l]!=s[h]){
            return false;
        }
        l++;
        h--;
    }
    return true;
   }
    bool validPalindrome(string s) {
        int n=s.size();
        int l=0;
        int h=n-1;
        while(l<h){
            if(s[l]!=s[h]){
                return IsPal(s,l+1,h)|| IsPal(s,l,h-1);
            }
            l++;
            h--;
        }
        return true;
    }
};