class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& o) {
        int r = m;
        int c = n;
        for (int i=0; i<o.size(); i++){
            if (o[i][0]<r) r=o[i][0];
            if (o[i][1]<c) c=o[i][1];
        }        
        return r*c;
        
    }
};
