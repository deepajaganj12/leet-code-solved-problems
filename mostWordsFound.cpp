class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans=0;
        for(string s : sentences){
            int k=1;
            for(int i=0;i<s.size();i++){
                if(s[i]==' ') k++;
            }
            ans=max(k,ans);
        }
        return ans;
    }
};
