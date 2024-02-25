#include<bits/stdc++.h>

int stockProfit(vector<int> &prices){

    // Write your code here.

    int n = prices.size();

    vector<int> ans(2,0);

     int next2_Buy = 0;

    for(int i=n-1;i>=0;i--){

        int temp = ans[1];

        for(int buy=1;buy>=0;buy--){

            int take ,notTake;

               if(buy){

                   take = -prices[i] + ans[0];

                   notTake = 0 + ans[1];

                }

                else{

                      take = prices[i] + next2_Buy;

                      notTake = 0 + ans[0];

                      next2_Buy = temp;

                }

                ans[buy] = max(take,notTake);

        }

    }

    return ans[1];

}
