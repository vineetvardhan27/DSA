class MedianFinder {
public:
  vector<int>nums;

    MedianFinder() {
        
    }
    
    void addNum(int num) {
        nums.push_back(num);
        
    }
    
    double findMedian() {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n%2==1){
           return nums[n/2];
        }
        else{
            int low=nums[n/2];
            int high=nums[(n/2)-1];
            return (low+high)/2.0;
        }
             
    }
};
