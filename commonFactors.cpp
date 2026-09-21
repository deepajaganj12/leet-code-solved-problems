class Solution {
public:
    int commonFactors(int a, int b) {
        int i,n,sum=0;
        if(a>b){
            n=a;
        }
        else{
            n=b;
        }
        for(i=1;i<=n;i++){
            if(a%i==0 && b%i==0){
                sum+=1;
            }
        }
        return sum;
    }
};
