class Solution {
public:
    int getLeastFrequentDigit(int n) {
        int temp=n;
        map<int,int> mp;
        while(n!=0){
            int dig = n%10;
            mp[dig]++;
            n/=10;
        }
        int frq = temp;
        int val = temp;
        for(auto it : mp){
            if(frq>it.second){
                frq=it.second;
                val=it.first;
            }
            else if(frq==it.second && val>it.first){
                val=it.first;
            }
        }
        return val;
    }
};
