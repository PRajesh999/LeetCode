class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        long waitingTime;
        long sum = customers[0][0]+customers[0][1];
        waitingTime = sum - customers[0][0];
        for(int i=1;i<customers.size();i++){
            if(sum > customers[i][0]){
                sum += customers[i][1];
                waitingTime += (sum - customers[i][0]);
            }
            else{
                sum = customers[i][0]+customers[i][1];
                waitingTime += (sum - customers[i][0]);
            }
        }
        return (double)waitingTime/customers.size();
    }
};