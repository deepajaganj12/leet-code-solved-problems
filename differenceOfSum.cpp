class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int ds=0;
        int es=0;
        for(int i=0;i<nums.size();i++){
            es+=nums[i];
            if(nums[i]>1 && nums[i]<9) ds+=nums[i];
            else{
                int temp=nums[i];
                while(temp>0){
                    ds+=(temp%10);
                    temp/=10;
                }
            }
        }
        return abs(ds-es);
    }
};
