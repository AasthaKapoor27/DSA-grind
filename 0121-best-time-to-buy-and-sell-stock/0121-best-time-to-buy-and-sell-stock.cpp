class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int miniprice = prices[0];
        int bestprice = 0;


        for(int i = 0; i < prices.size(); i++){

            if(prices[i] < miniprice){

                miniprice = prices[i];

            }

            int profit = prices[i] - miniprice;

            if (profit > bestprice){

                bestprice = profit;
            }

        }
        return bestprice;
        
    }
};