
class Solution {
public:
    vector<string> removeSubfolders(vector<string>& f) {
        sort(f.begin(), f.end());
        vector<string> ans = {f[0]};

        for (int i = 1; i < f.size(); ++i) {
            if (f[i].substr(0, ans.back().size() + 1) != ans.back() + "/") {
                ans.push_back(f[i]);
            }
        }
        return ans;
    }
};
