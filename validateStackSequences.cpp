class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> a;
        int j=0;
        for(int i=0;i<pushed.size();i++){
            a.push(pushed[i]);
            while(!a.empty() && popped[j]==a.top()){
                j++;
                a.pop();
            }
        }
        if(j==popped.size()) return true;
        return false;
    }
};
