class Solution {
public:
    bool isArraySpecial(std::vector<int>& nums) {
        if (nums.size() == 1) {
            return true;
        }
        int expectedParity = (nums[0] % 2) ^ 1;
        for (int i = 1; i < (int)nums.size(); i++) {
            if (nums[i] % 2 != expectedParity) return false;
            expectedParity ^= 1;
        }
        return true;
    }
};
