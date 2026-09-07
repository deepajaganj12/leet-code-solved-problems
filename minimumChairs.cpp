class Solution {
public:
    int minimumChairs(string s) {
        int chairs=0,people=0;
        for(char ch:s){
            if(ch=='E'){
                people+=1;
                if(chairs<people){
                    chairs+=1;
                }
            }
            else{
                people-=1;
            }
        }
        return chairs;
    }
};
