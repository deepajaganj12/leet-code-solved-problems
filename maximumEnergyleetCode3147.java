class Solution {
    public static int maximumEnergy(int[] energy, int k) {
        int n = energy.length;
        int dp[] = new int[n];
        int maxEnergy = Integer.MIN_VALUE;

        for (int i = n - 1; i >= 0; i--) {
            if (i + k < n)
                dp[i] = energy[i] + dp[i + k];
            else
                dp[i] = energy[i]; 

            maxEnergy = Math.max(maxEnergy, dp[i]);
        }

        return maxEnergy;
    }
    public static void main(String[] args){
        int []energy={5,6,7,8,2};
        int k=3;
        System.out.println(maximumEnergy(energy,k));
    }
}
