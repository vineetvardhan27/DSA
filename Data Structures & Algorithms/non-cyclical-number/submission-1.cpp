class Solution {
public:
    bool isHappy(int n) {
        int t=n;
        int temp=0;
        int rev=0;
        int cnt=0;
        
        while(t!=1 && cnt<100){
            rev=0;
            while(t>0){
            temp=t%10;
            rev+=temp*temp;
            t/=10;
            }
            t=rev;
            cnt++;
        }
        return t==1;
        
    }
};
