class Solution {
public:
    int minimizedStringLength(string s) {
        set<char> k;
        for(char c : s){
            k.insert(c);
        }
        return k.size();
    }
};
