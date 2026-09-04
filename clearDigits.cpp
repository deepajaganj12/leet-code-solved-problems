class Solution {
public:
    string clearDigits(string s) {
        stack<char> c;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])&& !c.empty()){
                c.pop();
            }
            else c.push(s[i]);
        }
        string ans = "";

        while (!c.empty()) {
            ans += c.top();
            c.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }        
};
