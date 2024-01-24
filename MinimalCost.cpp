int solve(int n, int k, vector<int> &height, vector<int>&dp){
    if(n==0) return 0;

    if(dp[n] != -1) return dp[n];

    int mini = INT_MAX;
    for(int i=1; i<=k; i++){
        int jump = INT_MAX;
        if(n-i >= 0) jump = solve(n-i, k, height, dp) + abs(height[n]-height[n-i]);
        mini = min(mini, jump);
    }
    dp[n] =  mini;
    return dp[n];
}

int minimizeCost(int n, int k, vector<int> &height){
    vector<int>dp(n+1, -1);
    return solve(n-1, k, height, dp);
}
