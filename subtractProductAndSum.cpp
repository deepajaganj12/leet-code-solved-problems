class Solution {
public:
    int subtractProductAndSum(int n) {
        int ans=0,p=1;
        while(n>0){
            int d=n%10;
            ans+=d;
            p*=d;
            n/=10;
        }
        return p-ans;
    }
};
