class KthLargest {
public:
   priority_queue<int,vector<int>,greater<int>>max_heap;
   int k;
    KthLargest(int k, vector<int>& nums) {
        this->k=k;
        int n=nums.size();
        for(int i=0;i<n;i++){
            max_heap.push(nums[i]);
            if(max_heap.size()>k){
                max_heap.pop();
            }
        }
    }
    
    int add(int val) {
       max_heap.push(val);
       if(max_heap.size()>k){
        max_heap.pop();

       }
       return max_heap.top();
        
        
    }
};
