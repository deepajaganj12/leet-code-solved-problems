class Solution {
public:
void solve(int i,string& str,int cost,vector<string>& ans,int n,int k){
    if(i==n){
        ans.push_back(str);
        return ;
    }
    str[i]='0';
    solve(i+1,str,cost,ans,n,k);
    if((i==0 || str[i-1]=='0')&& cost+i<=k){
        str[i]='1';
        solve(i+1,str,cost+i,ans,n,k);
    }

}
    vector<string> generateValidStrings(int n, int k) {
        string str(n,'0');
        vector<string> ans;
        solve(0,str,0,ans,n,k);
        return ans;
    }
};
