class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int ex) {
        int m=0;
        vector<bool> ans;
        for(int val : c){
            m=max(m,val);
        }
        for(int val : c){
            if(val+ex >= m) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};
