class Solution {
public:
    pair<int,int> help(char c,string s){
        int n=s.size();
        pair<int,int>ans={-1,-1};
        for(int i=0;i<n;i++){
          if(s[i]==c){
            ans.first=i;
            break;
          }
        }
        for(int i=0;i<n;i++){
            if(s[i]==c){
                ans.second=i;
                
            }
        }
        return ans;
    }
    vector<pair<char,pair<int,int>>>store(string s){
        vector<pair<char,pair<int,int>>>ans;
        set<char>uni(s.begin(),s.end());
        string temp(uni.begin(),uni.end());
        //  Just take the uni char and using help function finding the starting the ending 

        for(int i=0;i<temp.size();i++){
            ans.push_back({temp[i],help(temp[i],s)});
        }

        return ans;   
      

    }
    vector<int> partitionLabels(string sy) {
        int n=sy.size();
        vector<pair<char,pair<int,int>>>st=store(sy);

        //  I get the approach 
        //  Hard to implement the approach 

        // for(int i=0;i<st.size();i++){
        //     cout<<st[i].first<<" "<<st[i].second.first<<" "<<st[i].second.second<<endl;
        // }

        int cnt=0;
        vector<pair<int,int>>temp;

        for(int i=0;i<st.size();i++){
            temp.push_back({st[i].second.first,st[i].second.second});
        }
         

        sort(temp.begin(),temp.end());
        // cout<<endl;
        //  for(int i=0;i<st.size();i++){
        //     cout<<temp[i].first<<" "<<temp[i].second<<endl;
        // }




// 0 3
// 1 4
// 5 7
// 6 9
// 10 10
// 11 11
// 12 12
        vector<int>ans;
        
        int s=temp[0].first;
        int e=temp[0].second;
        cout<<endl;
        for(int i=1;i<temp.size();i++){
            
            if(temp[i].first<=e){
              e=max(e,temp[i].second);
            }
            else{  
                // cout<<e<<" "<<s<<" "<<endl;
               ans.push_back((e-s+1));
               s=temp[i].first;
               e=temp[i].second;
            }

        }
        //  cout<<e<<" "<<s<<" "<<endl;
        ans.push_back((e+1-s));




        
        return ans;






        
    }
};
