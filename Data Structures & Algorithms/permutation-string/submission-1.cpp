class Solution {
public:
//  It's constant o(26)~o(1)
bool help_function(vector<int>& a,vector<int>& b){
    for(int i=0;i<26;i++){
       if(a[i]!=b[i]){
          return false;
       }
    }
    return true;
}
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();

        // int l=0;
        // int h=0;
        // int cnt=0;

        // while(l<n && h<m){
        //     if(s1[l]==s2[h]){
        //         cnt++;
        //         l++;
        //         h++;
        //     }
        //     else{
        //         h++;
        //     }
        // }
        // return cnt==n;
        
        //  I think of the approach like take the frq of the s1 in a vector 
        vector<int>a(26,0);
        vector<int>b(26,0);
        for(int i=0;i<n;i++){
            a[s1[i]-'a']++;
        }
        // for(int i=0;i<26;i++){
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;
        int k=0;
        bool check=false;
        for(int i=0;i<m;i++){
            b[s2[i]-'a']++;
            if(i>=n){
              b[s2[k]-'a']--;
              k++;
            }
            check=help_function(a,b);
            if(check==true){
                return true;
            }
        }
        
        //  for(int i=0;i<26;i++){
        //     cout<<b[i]<<" ";
        // }
        
        return false;



    }
};
