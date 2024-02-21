int maximumProfit(vector<int> &prices, int n, int fee)

{

        int currNotBuy = 0,currBuy = 0,nextNotBuy = 0,nextBuy = 0;

        for(int ind = n-1; ind>=0; ind--){

            for(int buy=1; buy>=0; buy--){

                currBuy = max(nextNotBuy+prices[ind]-fee,nextBuy);

                currNotBuy = max(nextBuy-prices[ind],nextNotBuy);

            }

            nextNotBuy=currNotBuy;

            nextBuy = currBuy;

        }

        return currNotBuy;

}
