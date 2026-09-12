class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>arr = heights;
        int count=0;
        sort(arr.begin(),arr.end());
        for(int i=0 ; i<arr.size();i++){
            if(arr[i]!=heights[i])count++;
        }
        return count;
    }
};
