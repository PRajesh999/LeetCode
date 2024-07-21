class Solution {
public:
    string losingPlayer(int x, int y) {
        if(y<4) return "Bob";
        if(x==1) return "Alice";
        int c=0;
        while(1) {
            if(x<1 or y<4) break;
            else {
                x-=1;
                y-=4;
                c++;
            }
        }
        if(c%2!=0) return "Alice";
        else return "Bob";
    }

};