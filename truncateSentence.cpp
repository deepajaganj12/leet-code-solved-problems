class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans="";
        int m=0;
        for(int i=0;i<s.size();i++){
            
            if(s[i]==' ') m++;
            if(m==k) break;
            ans+=s[i];
        }
        return ans;

    }
};
