class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>()); 
        int operations = 0;
        int prevUnique = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == prevUnique) continue;

            if (nums[i] < prevUnique) {
                operations += i;
            }

            prevUnique = nums[i];
        }

        return operations;        
    }
};
