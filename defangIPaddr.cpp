class Solution {
public:
    string defangIPaddr(string a) {
        string ans;
        for(int i=0;i<a.size();i++){
            ans+=a[i];
            if(a[i+1]=='.'){
                ans+="[.]";
                i++;
            }
        }
        return ans;
    }
};
