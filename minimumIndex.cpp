class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int n=nums.size(),mx=0,x;
        unordered_map<int,int> mp1,mp2;
        for(int i=0;i<n;i++) mp1[nums[i]]++;
        for(int i=0;i<n;i++){
            mp2[nums[i]]++;
            mp1[nums[i]]--;
            if(mp2[nums[i]]>mx){
                x=nums[i];
                mx=mp2[x];
            }
            if(mp2[x]*2>i+1 && mp1[x]*2>n-(i+1)) return i;
        }
        return -1;
    }
};
