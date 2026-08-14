class Solution {
public:
    int countConsistentStrings(string a, vector<string>& words) {
        int count=0;
        for(string s : words){
            bool m=true;
            for(char c : s){
                if(a.find(c)==string::npos){
                    m=false;
                    break;
                }
            }
            if(m) count++;
        }
        return count;
    }
};
