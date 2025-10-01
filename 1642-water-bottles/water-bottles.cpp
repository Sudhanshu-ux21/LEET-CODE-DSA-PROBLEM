class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        // int Total;
        int Total=numBottles;
        if(numBottles<numExchange) return numBottles;
        
        while(numBottles>=numExchange){
            int newbottles=numBottles/numExchange;
            // numBottles=numBottles+n;
            int leftover=numBottles%numExchange;
            Total=Total+newbottles;
            numBottles=newbottles+leftover;
            
            
        }
        return Total;
    }
};