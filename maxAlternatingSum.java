class Solution {
    public long maxAlternatingSum(int[] nums) {
        long evensum=0;
        long oddsum=0;
        int n = nums.length;
        for(int i=0;i<n;i++){
            nums[i]=Math.abs(nums[i]);
        }
        Arrays.sort(nums);
        for(int k=0;k<n/2;k++){
            evensum+=(nums[k]*nums[k]);
        }
        
        for(int k=n/2;k<n;k++){
            oddsum+=(nums[k]*nums[k]);
        }
        return Math.abs(evensum-oddsum);
        

    }
}
