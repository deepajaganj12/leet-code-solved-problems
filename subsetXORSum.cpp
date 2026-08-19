class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int total = 0;
        int n = nums.size();

        for (int mask = 0; mask < (1 << n); mask++) {
            int sum = 0;

            for (int j = 0; j < n; j++) {
                if (mask & (1 << j)) {
                    sum ^= nums[j];
                }
            }

            total += sum;
        }

        return total;
    }
};
