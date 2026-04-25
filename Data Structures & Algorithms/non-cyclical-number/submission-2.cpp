class Solution {
public:
    bool isHappy(int n) {
        int t=n;
        int temp=0;
        int rev=0;
        // optimized on the loops using a set

        unordered_set<int>seen;

        
        while(t!=1 && !seen.count(t)){
            seen.insert(t);
            rev=0;
            while(t>0){
            temp=t%10;
            rev+=temp*temp;
            t/=10;
            }
            t=rev;
        }
        return t==1;
        
    }
};
