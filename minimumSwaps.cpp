class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int count=0;
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            if(nums[j]==0){
                j--;
            }else if(nums[i]==0 && nums[j]!=0){
                count++;
                i++;
                j--;
            }else{
                i++;
            }
        }
        return count;
    }
};
