class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> a(26);
        for(char c :s) a[c-'a']++;
        for(char c : t) a[c-'a']--;
        int ans=0;
        for(int i=0;i<26;i++){
            if(a[i]>0){
                ans+=a[i];
            }
        }
        return ans; 
    }
};
