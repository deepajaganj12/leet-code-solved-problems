class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        vector<int> Freq_Count(101, 0);
        for (int i = 0; i < nums.size(); i++)
            Freq_Count[nums[i]]++;

        int pairs = 0, left_over = 0;
        for (int i = 0; i < Freq_Count.size(); i++) {
            pairs += Freq_Count[i] / 2;
            left_over += Freq_Count[i] % 2;
        }
        return {pairs,left_over};
    }
};
