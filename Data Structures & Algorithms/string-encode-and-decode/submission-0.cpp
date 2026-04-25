class Solution {
public:

    string encode(vector<string>& strs) {
        string enco="";
        int n=strs.size();
        
        for(int i=0;i<n;i++){
            string a=strs[i];
            int len=a.size();       
            enco+=to_string(len)+'#';
            enco+=a;
        }
        return enco;
        

    }

    vector<string> decode(string s) {
        vector<string>res;
        int n=s.size();
        int i=0;
        while(i<n){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int len=stoi(s.substr(i,j-i));
            i=j+1;
            j=i+len;
            res.push_back(s.substr(i,len));
            i=j;
        }
        return res;


    }
};
