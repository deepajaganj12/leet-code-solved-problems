class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> ans;
        for(int i=0;i<matrix[0].size();i++){
            int sum=0;
            for(int j=0;j<matrix.size();j++){
                sum+=matrix[j][i];
            }
            ans.push_back(sum);
        }
        return ans;
    }
};
