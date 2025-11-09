package githubproblems;

import java.util.Arrays;

public class leetcode891 {
    
    
    public  static int sumSubseqWidths(int[] A) {
        Arrays.sort(A);
        long c = 1, res = 0, mod = (long)1e9 + 7;
        for (int i = 0, n = A.length; i < n; ++i, c = c * 2 % mod)
            res = (res + A[i] * c - A[n - i - 1] * c) % mod;
        return (int)((res + mod) % mod);
    }

    public static void main(String[] args) {
        int A[]={9,7,8,6,7};
        System.out.println(sumSubseqWidths(A));
    }
}
