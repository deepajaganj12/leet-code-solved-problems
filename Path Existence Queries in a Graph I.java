import java.util.Arrays;

public class Main {

    static class Solution {
        public boolean[] pathExistenceQueries(int n, int[] nums, int maxDiff, int[][] queries) {
            int[] component = new int[n];

            int val = 0;
            component[0] = 0;

            for (int i = 1; i < n; i++) {
                if (nums[i] - nums[i - 1] > maxDiff) {
                    val++;
                }
                component[i] = val;
            }

            boolean[] ans = new boolean[queries.length];

            for (int i = 0; i < queries.length; i++) {
                int u = queries[i][0];
                int v = queries[i][1];
                ans[i] = component[u] == component[v];
            }

            return ans;
        }
    }

    public static void main(String[] args) {
        Solution sol = new Solution();

        int n = 6;
        int[] nums = {1, 2, 3, 8, 9, 10};
        int maxDiff = 2;

        int[][] queries = {
            {0, 2},
            {1, 4},
            {3, 5},
            {2, 3}
        };

        boolean[] result = sol.pathExistenceQueries(n, nums, maxDiff, queries);

        System.out.println(Arrays.toString(result));
    }
}
