class Solution {
public:
    int maxArea(vector<int>& heights) {
       int n=heights.size();
       int curr,res=0;
       for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            curr=(j-i)*min(heights[i],heights[j]);
            res=max(res,curr);
        }
       } 
       return res;
    }
};
