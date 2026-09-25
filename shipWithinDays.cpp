class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int totalDays = 0;
        int current = 0;

        for (int i = 0; i < weights.size(); i++) {

            current += weights[i];

            if (current == capacity) {
                totalDays++;
                current = 0;
            }
            else if (current > capacity) {
                totalDays++;
                current = weights[i];
            }
        }

        if (current > 0) {
            totalDays++;
        }

        return totalDays <= days;
    }
};
