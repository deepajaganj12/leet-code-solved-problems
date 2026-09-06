class Solution {
public:
    int countPoints(string rings) {
        int count=0;
        for(int i=0;i<10;i++){
            int b=0,r=0,g=0;
            for(int j=1;j<rings.length();j+=2){
                if(rings[j]==(i+'0')){
                    if(rings[j-1]=='B'){
                        b++;
                    }
                    else if(rings[j-1]=='R'){
                        r++;
                    }
                    else if(rings[j-1]=='G'){
                        g++;
                    }
                }
            }
            if(b>0 && r>0 && g>0){
                count++;
            }
        }
        return count;

    }
};
