class Solution {
public:
    bool doesAliceWin(string s) {
        int vc=0;
        for(auto i:s) {
            if(i=='a' or i=='e' or i=='i' or i=='o' or i=='u')
            vc++;
        }
        return (vc>0);
    }
};