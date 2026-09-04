class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        stringstream ss(text);
        vector<string> s;
        int ans=0;
        string w;
        while(ss >> w){
            s.push_back(w);
        }
        for(string n : s){
            bool broken=false;
            for(char m : brokenLetters){
                if(n.find(m) != string::npos){
                    broken=true;
                    break;
                }
            }
            if(!broken) ans++;
        }
        return ans; 
    }
};
