class Solution {
    public int findPairs(int[] nums, int k) {
        if(k<0) return 0;
        int i=0;
        int j=1;
        int count=0;
        Arrays.sort(nums);
      

        if (k == 0) {
             count = 0;
            for (int x = 1; x < nums.length; x++) {
                if (nums[x] == nums[x - 1]) {
                    count++;
                    while (x + 1 < nums.length && nums[x] == nums[x + 1]) {
                        x++;
                    }
            }
        }
            return count;
        }
        while(j<nums.length){
            if(i==j || nums[j]-nums[i]<k){
                j++;
            }else if(nums[j]-nums[i]>k){
                i++;
            }else{
                count++;
                i++;
                j++;
            }
            while(j<nums.length && nums[j]==nums[j-1]){
                j++;
            }
        }
        return count;
    }
}
