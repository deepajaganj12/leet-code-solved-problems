class Solution {
public:
    string findCommonResponse(vector<vector<string>>& r) {
        int n = r.size();

        unordered_map<string, int> freq;

        for(size_t i = 0; i < n; ++i) {

            unordered_set<string> seen;
            for(size_t j = 0; j < r[i].size(); ++j) {

                if(!seen.contains(r[i][j])) {
                    ++freq[r[i][j]];
                }
                seen.insert(r[i][j]);
            }
        }
        
        string ans;
        int c = -1;
        for(const auto& [str, cnt] : freq) {
            if(cnt > c) {
                c = cnt;
                ans = str;
            }
            else if(cnt == c) {
                ans = min(ans, str);
            }
        }

        return ans;
    }
};
