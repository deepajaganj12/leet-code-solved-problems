class Solution {
public:
    int appendCharacters(string s, string t) {
        int i = 0, j = 0;
        int k = s.length(), l = t.length();
    
        while (i < k && j < l) {
            if (s[i] == t[j]) {
                j++;
            }
            i++;
        }
    
        return l - j;
    }
};
