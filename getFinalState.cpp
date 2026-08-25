class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int,int>, vector<pair<int,int>> ,greater<pair<int,int>>>p;
        
        for(int i=0;i<nums.size();i++){
            p.push(make_pair(nums[i],i));
        }

        while(k !=0){
            pair<int,int> node = p.top();
            p.pop();

            node.first = node.first* multiplier;
            p.push(node);

            k--;
        }

        int n = nums.size();
        vector<int>ans(n,0);

        while(!p.empty()){
            pair<int,int> element = p.top();
            p.pop();
            int node = element.first;
            int ind = element.second;

            ans[ind] = node;
        }

        return ans;
    }
};
