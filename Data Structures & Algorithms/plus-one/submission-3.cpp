class Solution {
public:
   long long  arr_to_number(vector<int>nums){
    long long  num=0;
    for(int digits:nums){
        num=num*10+digits;
      }
     return num;
   }
   vector<int> number_to_arr(long long  t){
    vector<int>ans;
    if (t == 0) return {0};
    int temp=0;
      while(t>0){
         temp=t%10;
         ans.push_back(temp);
         t/=10;
     }
     reverse(ans.begin(),ans.end());
     return ans;

   }
    vector<int> plusOne(vector<int>& digits) {
        // int n=digits.size();
        // for(int i=n-1;i>=0;i++){
        //     if(digits[i]<9){
        //         digits[i]=digits[i]+1;
        //     }
        //     else{
        //         for(int j=)
        //     }
        // }
        long long  a=arr_to_number(digits);
        return number_to_arr(a+1);

        
    }
};
