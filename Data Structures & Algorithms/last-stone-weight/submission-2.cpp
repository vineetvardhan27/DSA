class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        if(n==2 && stones[0]==stones[1]){
            return 0;
        }
        if(n==1){
            return stones[0];
        }
        if(n==2){
            int a=stones[0];
            int b=stones[1];
            if(a<b){
                return b-a;
            }
            else{
                return a-b;
            }

        }

        priority_queue<int>max_heap(stones.begin(),stones.end());
        while(max_heap.size()>=2){
            int first=max_heap.top();
            max_heap.pop();
            int second=max_heap.top();
            max_heap.pop();
            if(first!=second){
                max_heap.push(first-second);
            } 
            if(first==second){
                max_heap.push(0);
            } 
        }
       

        return max_heap.top();
        
    }
};
