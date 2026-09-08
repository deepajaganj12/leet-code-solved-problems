class Solution {
public:
    bool isSameAfterReversals(int num) {
        int n=num;
        int rev=0;
        while(num>0){
            int d=num%10;
            rev=rev*10+d;
            num/=10;
        }
        int m=0;
        while(rev>0){
            int d=rev%10;
            m=m*10+d;
            rev/=10;
        }
        if(m==n) return true;
        else return false;
    }
};
