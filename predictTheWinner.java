import java.util.*;

public class Main {

    public static boolean predictTheWinner(int[] nums) {
        int n = nums.length;

        if (n % 2 == 0)
            return true;

        int[] dp = nums.clone();

        for (int i = n - 2; i >= 0; i--) {
            for (int j = i + 1; j < n; j++) {
                dp[j] = Math.max(nums[i] - dp[j], nums[j] - dp[j - 1]);
            }
        }

        return dp[n - 1] >= 0;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] nums = new int[n];

        for (int i = 0; i < n; i++) {
            nums[i] = sc.nextInt();
        }

        System.out.println(predictTheWinner(nums));
    }
}
