class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
       unordered_map<int,int> freq;
       vector<int> v;
       for(int val : nums){
            if(freq[val]<k){
                v.push_back(val);
                freq[val]++;
            }
       }
       return v;
    }
};
