import java.util.*;

public class Main {

    public static long gcdSum(int[] nums) {
        int[] prefixGcd = new int[nums.length];
        int max = -1;

        for (int i = 0; i < nums.length; i++) {
            max = Math.max(max, nums[i]);
            prefixGcd[i] = gcd(max, nums[i]);
        }

        Arrays.sort(prefixGcd);

        long sum = 0;
        int i = 0;
        int j = nums.length - 1;

        while (i < j) {
            sum += gcd(prefixGcd[i], prefixGcd[j]);
            i++;
            j--;
        }

        return sum;
    }

    private static int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] nums = new int[n];

        for (int i = 0; i < n; i++) {
            nums[i] = sc.nextInt();
        }

        System.out.println(gcdSum(nums));

        sc.close();
    }
}
