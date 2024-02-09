#include<bits/stdc++.h>
int matrixChainMultiplication(int* arr, int N){
    N++;
    vector<vector<int>> dp(N,vector<int>(N,0));
    for(int L=N-1;L>=1;L--){
        for(int R=L+1;R<N;R++){
            dp[L][R] = 1e9;
            for(int K=L;K<R;K++){
                int currCost = arr[L-1]*arr[K]*arr[R] + dp[L][K] + dp[K+1][R];
                dp[L][R] = min(dp[L][R],currCost);
            }
        }
    }
    return dp[1][N-1];
}
