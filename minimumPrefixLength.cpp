class Solution {
public:
    int minimumPrefixLength(vector<int>& A) {
        int i = A.size() - 1;
        while (i > 0 && A[i - 1] < A[i]) {
            i--;
        }
        return i;
    }
};
