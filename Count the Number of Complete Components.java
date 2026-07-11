import java.util.*;

public class Main {

    static class Solution {
        static int V, E;

        public int countCompleteComponents(int n, int[][] edges) {
            List<Integer>[] A = new ArrayList[n];
            Arrays.setAll(A, i -> new ArrayList<>());

            for (int[] e : edges) {
                A[e[0]].add(e[1]);
                A[e[1]].add(e[0]);
            }

            boolean[] vis = new boolean[n];
            int res = 0;

            for (int i = 0; i < n; i++) {
                if (!vis[i]) {
                    V = 0;
                    E = 0;

                    dfs(i, A, vis);

                    if (E == V * (V - 1))
                        res++;
                }
            }

            return res;
        }

        private void dfs(int x, List<Integer>[] A, boolean[] vis) {
            V++;
            E += A[x].size();
            vis[x] = true;

            for (int next : A[x]) {
                if (!vis[next]) {
                    dfs(next, A, vis);
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Input:
        // n
        // m
        // m lines: u v

        int n = sc.nextInt();
        int m = sc.nextInt();

        int[][] edges = new int[m][2];

        for (int i = 0; i < m; i++) {
            edges[i][0] = sc.nextInt();
            edges[i][1] = sc.nextInt();
        }

        Solution sol = new Solution();
        System.out.println(sol.countCompleteComponents(n, edges));

        sc.close();
    }
}
