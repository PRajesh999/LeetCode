class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        if(bills[0]>5) return false;
        int c5 = 1;
        int c10 = 0;
        for(int i=1;i<bills.size();i++){
            if(c5<0 || c10<0) return false;
            if(bills[i]==5) c5++;
            else if(bills[i]==10){
                c5--;
                c10++;
            }
            else if(bills[i]==20){
               if(c10>0){
                c10--;
                c5--;
               }
               else{
                c5-=3;
               }
            }
        }
        if(c5<0 || c10<0) return false;
        else return true;
    }
};