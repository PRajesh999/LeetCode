class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int emptyBottles = 0, numBottlesDrink = 0;
        numBottlesDrink += numBottles;
        emptyBottles += numBottles; 
        numBottles = 0;
        while(numBottles==0 && emptyBottles >= numExchange){
            numBottles = emptyBottles/numExchange;
            emptyBottles %= numExchange;
            numBottlesDrink += numBottles;
            emptyBottles +=  numBottles;
            numBottles = 0;
        }
        return numBottlesDrink;
    }
};