class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<char> ans;

        for(int i=0;i<stones.size();i++){
            for(int j=0;j<jewels.size();j++){
                if(stones[i]==jewels[j]) ans.push_back(stones[i]);
            }
        }
        return ans.size();
    }
};
