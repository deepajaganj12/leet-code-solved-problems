class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        unordered_map<char,vector<int>>mp;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]].push_back(i);
        }
        int count=0;
        for(int i=0;i<words.size();i++)
        {
            string a=words[i];
            bool found=true;
            int prev=-1;
            for(int j=0;j<a.length();j++)
            {
                if(mp.find(a[j])==mp.end())
                {
                    found=false;
                    break;
                }
                auto it = upper_bound(mp[a[j]].begin(), mp[a[j]].end(), prev);
                if(it == mp[a[j]].end()) {
                    found = false;
                    break;
                }

                prev = *it;
            }
            if(found==true) 
            {
                count++;
            }
        }
        return count;
    }
};
