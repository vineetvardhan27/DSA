class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& tri, vector<int>& t) {
        int n=tri.size();

        int a=0;
        int b=0;
        int c=0;
        // sort(tri.begin(),tri.end());

        //  Removing which is greater then the 
        for(int i=0;i<n;i++){
            int x=tri[i][0];
            int y=tri[i][1];
            int z=tri[i][2];
          if(x<=t[0] && y<=t[1] && z<=t[2]){
            a=max(a,x);
            b=max(b,y);
            c=max(c,z);
        }
            if(a==t[0] && b==t[1] && c==t[2]){
                return true;
            }

        }
        return false;

        
    }
};
