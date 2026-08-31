class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int ans=INT_MAX;
        for(int i=0;i<tasks.size();i++){
            int sum=0;
            for(int j=0;j<tasks[i].size();j++){
                sum+=tasks[i][j];
            }
            ans=min(ans,sum);
        }
        return ans;
    }
};
