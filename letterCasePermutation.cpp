class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> result;
        backtrack("", s, result);
        return result;
    }

    void backtrack(string output, string input, vector<string>& result) {
        if (input.empty()) {
            result.push_back(output);
            return;
        }
        char c = input[0];
        string remaining = input.substr(1);
        if (isdigit(c)) {
            backtrack(output + c, remaining, result);
        } else {
            backtrack(output + tolower(c), remaining, result);
            backtrack(output + toupper(c), remaining, result);
        }
    }
};
