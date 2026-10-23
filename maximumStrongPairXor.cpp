class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int maxXOR = 0;

        int j = 0;
        for (int i = 0; i < n; i++) 
        {
            while (j < n && nums[j] <= 2 * nums[i]) j++;

            for (int k = i + 1; k < j; k++) 
                maxXOR = max(maxXOR, nums[i] ^ nums[k]);
        }
        return maxXOR;
    }
};
