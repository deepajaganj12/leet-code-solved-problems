class Solution {
public:
    string interpret(string c) {
        string ans = "";

        for (int i = 0; i < c.size(); i++) {
            
            if (c[i] == 'G') {
                ans += 'G';
            }
            else if (c[i] == '(' && c[i + 1] == ')') {
                ans += 'o';
                i++;
            }
            else {
                ans += 'a';
                ans += 'l';
                i += 3;
            }
        }

        return ans;
    }
};
