class Solution {
public:
    int reverseNum(int n) {
        int rev = 0;
        while (n != 0) {
            int rem = n % 10;
            n /= 10;
            rev = rev * 10 + rem;
        }
        return rev;
    }
    int countDistinctIntegers(vector<int>& nums) {
        map<int, int> mp;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int reverse = reverseNum(nums[i]);
            if (!mp.contains(nums[i]))
                mp[nums[i]]++;
            if (!mp.contains(reverse))
                mp[reverse]++;
        }
        return mp.size();
    }
};
