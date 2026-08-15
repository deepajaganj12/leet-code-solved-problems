class Solution { 
public:
    bool checkRecord(string s) {
        int absentcount = 0;
        int latecount = 0;
        int consecutivelatecount = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'A'){
                absentcount += 1;
            }
            if(s[i] == 'L'){
                latecount += 1;
                consecutivelatecount = max(latecount,consecutivelatecount); 
            }else{
                latecount = 0;
            }
        }
        if (absentcount < 2 && consecutivelatecount < 3){
            return true;
        }else{
            return false;
        }
    }
};
