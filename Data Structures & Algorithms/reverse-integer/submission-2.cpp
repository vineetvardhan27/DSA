class Solution {
public:
    int reverse(int x) {
        int n=abs(x);
        int temp=0;
        int rev=0;

        while(n>0){
            temp=n%10;
            if(rev>INT_MAX/10|| rev<INT_MIN/10){
                return 0;
            }
            rev=rev*10+temp;
            n/=10;
        }
        if(x<0){
           return -rev;
        }
        
        return rev;
        
    }
};
