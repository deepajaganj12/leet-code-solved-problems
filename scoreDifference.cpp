class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int fp = 0,sp = 0,turn1 = 1;
        for(int i = 1; i<=nums.size(); i++){
            if(nums[i-1]&1) turn1 = !turn1;
            if(i%6 == 0) turn1 = !turn1;
            if(turn1) fp += nums[i-1];
            else sp += nums[i-1];
        }
        return fp - sp;
    }
};
