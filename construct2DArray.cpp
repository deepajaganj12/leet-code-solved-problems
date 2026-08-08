class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& a, int m, int n) {
        vector<vector<int>> ans;
        int len = a.size();
        if((m*n)!=len) return ans;
        int idx=0;
        for(int i=0;i<m;i++){
            vector<int> temp1(n);
            int temp=n;
            int tempm=0;
            while(temp--){
                temp1[tempm++]=a[idx++];
            }
            ans.push_back(temp1);
        }
        return ans;
    }
};
