class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size()<=2) return -1;
        int minValue = nums[0];
        int maxValue = nums[0];
        int selectedNumber = -1;

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] < minValue) {
                selectedNumber = minValue;
                minValue = nums[i];
            } else if (nums[i] > maxValue) {
                selectedNumber = maxValue;
                maxValue = nums[i];
            } else {
                return nums[i];
            }
        }

        return selectedNumber;
    }
};
