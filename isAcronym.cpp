class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string ans="";
        for(string c : words){
            ans+=c[0];
        }
        return ans==s;
    }
};
