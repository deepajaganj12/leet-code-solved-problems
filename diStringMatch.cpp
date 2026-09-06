class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> ans;
        int i = 0;
        int j = s.size();

        for (char ch : s) {
            if (ch == 'I') {
                ans.push_back(i);
                i++;
            }
            else {
                ans.push_back(j);
                j--;
            }
        }

        ans.push_back(j);
        return ans;
    }
};
