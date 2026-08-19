class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int count=0;
        string s=to_string(num);
        for(int i=0;i<=s.size()-k;i++){
            string p="";
            for(int j=0;j<k;j++){
                p+=s[i+j];
            }
            int l=stoi(p);
            if(l>0 && num%l==0) count++;
        }
        return count;
    }
};
