class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int c=0;
        int size = hours.size();
        for(int i=0;i<size;i++) {
            for(int j=i+1;j<size;j++)
            {

                if((hours[i]+hours[j])%24==0)
                {
                    c++;
                }
            }
        }
        return c;
    }
};