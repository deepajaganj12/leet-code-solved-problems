class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int count=0;
        for(int val : hours){
            if(val>=target) count++;
        }
        return count;
    }
};
