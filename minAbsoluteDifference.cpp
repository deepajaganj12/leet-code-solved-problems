class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int count=INT_MAX;
        for(int i=0;i<nums.size();i++){
            for(int j=nums.size()-1;j>=0;j--){
                if(nums[i]==1 && nums[j]==2){
                    count=min(count,abs(i-j));
                }
            }
        }
        return count==INT_MAX ? -1 : count ;
    }
};
