class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& c) {
        int i=0,j=0;
        for(string s : c){
            if(s[0]=='D'){
                i++;
            }else if(s[0]=='U'){
                i--;
            }else if(s[0]=='R'){
                j++;
            }else{
                j--;
            }
        }
        return (i*n)+j;
    }
};
