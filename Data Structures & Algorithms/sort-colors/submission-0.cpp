class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int one=0;
        int zero=0;
        int two=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zero++;
            }
            else if(nums[i]==1){
                one++;
            }
            else{
                two++;
            }
        }
        while(!nums.empty()){
            nums.pop_back();
        }
        for(int i=0;i<zero;i++){
           nums.push_back(0);
        }
        for(int i=zero;i<zero+one;i++){
            nums.push_back(1);
        }
        for(int i=zero+one;i<zero+one+two;i++){
            nums.push_back(2);
        }
        
    }
};