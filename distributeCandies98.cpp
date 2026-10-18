class Solution {
public:
    int distributeCandies(int n, int limit) {
        int minFirst = max(0, n - 2 * limit);  
        int maxFirst = min(n, limit);         
        int ways = 0;

        for (int i = minFirst; i <= maxFirst; i++) {
            int N = n - i; 

            int minCh2 = max(0, N - limit);    
            int maxCh2 = min(N, limit);       

            ways += maxCh2 - minCh2 + 1;       
        }

        return ways;
    }
};
