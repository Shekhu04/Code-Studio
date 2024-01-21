#include <bits/stdc++.h> 

 

int solve(vector<int>& heights, int curr, int target, vector<int>& dp) {

 

    if(dp[curr] != -1) {

        return dp[curr];

    }

 

    if(curr == target) {

        return 0;

    }

 

    

    int energy1 = abs(heights[curr] - heights[curr+1]) + solve(heights, curr+1, target, dp);

    int energy2 = INT_MAX;

    if(curr+2 <= target) {

        energy2 = abs(heights[curr] - heights[curr+2]) + solve(heights, curr+2, target, dp);

    }

 

    return dp[curr] = min(energy1, energy2);

 

}

 

int frogJump(int n, vector<int> &heights)

{

    vector<int> dp(n+1, -1);

 

    return solve(heights, 0, n-1, dp);

}
