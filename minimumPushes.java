import java.util.*;

class Solution {

    public int minimumPushes(String word) {
        int ans = 0;
        for (int i = 0; i < word.length(); i++) {
            ans += (i / 8) + 1;
        }
        return ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String word = sc.next();

        Solution obj = new Solution();
        System.out.println(obj.minimumPushes(word));

        sc.close();
    }
}
