class Solution {
public:
    int differenceOfSums(int n, int m) {
        int is=0;
        int no=0;
        for(int i=1;i<=n;i++){
            if(i%m==0) is+=i;
            else no+=i;
        }
        return no-is;
    }
};
