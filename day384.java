class Solution {
    public List<Integer> targetIndices(int[] nums, int target) {
        int less=0;
        int equ=0;
        for(int val : nums){
            if(target>val){
                less++;
            }
            else if(val==target){
                equ++;
            }
        
        }
        List<Integer> lis =new ArrayList<>();
        for(int i=0;i<equ;i++){
            lis.add(less+i);
        }
        return lis;
    }
}
