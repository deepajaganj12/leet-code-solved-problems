class Solution {
public:
    int sumOfSquares(std::vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                int j = n / i;
                sum += nums[i - 1] * nums[i - 1];
                if (j != i) sum += nums[j - 1] * nums[j - 1];
            }
        }
        return sum;
    }
};
