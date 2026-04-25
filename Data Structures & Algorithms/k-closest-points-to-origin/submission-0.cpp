class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int n=points.size();
        priority_queue<pair<int,pair<int,int>>>max_heap;
        for(int i=0;i<n;i++){
            int x=points[i][0];
            int y=points[i][1];
            int dis=x*x+y*y;
            max_heap.push({dis,{x,y}});
            if(max_heap.size()>k){
                max_heap.pop();
            }

        }
        vector<vector<int>>ans;
        while(!max_heap.empty()){
            ans.push_back({max_heap.top().second.first,max_heap.top().second.second});
            max_heap.pop();
        }
        return ans;
        
    }
};
