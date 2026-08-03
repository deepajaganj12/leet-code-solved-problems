import java.util.*;

public class Main {

    static class Solution {
        public String stoneGameIII(int[] stoneValue) {
            int n = stoneValue.length;
            int[] dp = new int[n + 1];

            for (int i = n - 1; i >= 0; i--) {
                int best = Integer.MIN_VALUE;
                int runningSum = 0;

                for (int k = 1; k <= 3; k++) {
                    if (i + k > n) break;

                    runningSum += stoneValue[i + k - 1];
                    best = Math.max(best, runningSum - dp[i + k]);
                }

                dp[i] = best;
            }

            if (dp[0] > 0)
                return "Alice";
            else if (dp[0] < 0)
                return "Bob";
            else
                return "Tie";
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] stoneValue = new int[n];

        for (int i = 0; i < n; i++) {
            stoneValue[i] = sc.nextInt();
        }

        Solution sol = new Solution();
        System.out.println(sol.stoneGameIII(stoneValue));

        sc.close();
    }
}
