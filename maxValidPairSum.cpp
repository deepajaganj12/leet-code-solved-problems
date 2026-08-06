class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=INT_MIN;
        int mx=nums[0];
        for(int j=k;j<n;j++){
            mx=max(mx,nums[j-k]);
            ans=max(ans,mx+nums[j]);
        }
        return ans;
        
    }
};
