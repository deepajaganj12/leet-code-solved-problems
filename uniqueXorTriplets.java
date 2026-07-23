import java.util.*;

class Solution {

    public int uniqueXorTriplets(int[] nums) {
        int n = nums.length;

        if (n <= 2) return n;

        int mask = 0;

        for (int num : nums) {
            mask |= num;
        }

        return mask + 1;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number of elements: ");
        int n = sc.nextInt();

        int[] nums = new int[n];

        System.out.println("Enter the elements:");
        for (int i = 0; i < n; i++) {
            nums[i] = sc.nextInt();
        }

        Solution obj = new Solution();

        int result = obj.uniqueXorTriplets(nums);

        System.out.println("Number of unique XOR triplets: " + result);

        sc.close();
    }
}
