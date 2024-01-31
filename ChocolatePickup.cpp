#include <bits/stdc++.h> 

int dp[51][51][51];
int helper(int i, int j1, int j2, int n, int m, vector<vector<int>>& g){
    //Base Case
    if(j1<0 || j1>=m || j2<0 || j2>=m) return -1e9;
    if(i == n-1){
        if(j1 == j2) return g[i][j1];
        return (g[i][j1] + g[i][j2]);
    }
    if(dp[i][j1][j2] != -1) return dp[i][j1][j2];

    int maxi = -1e9;
    //Recursive Call for All Paths
    for(int dj1= -1; dj1 <= 1; dj1++){
        for(int dj2= -1; dj2 <= 1; dj2++){
            int value = 0;
            if(j1 == j2) value = g[i][j1];
            else value = (g[i][j1] + g[i][j2]);
            value += helper(i+1, j1+dj1, j2+dj2, n, m, g);
            maxi = max(maxi, value);
        }
    }
    return dp[i][j1][j2] = maxi;
} 

int maximumChocolates(int r, int c, vector<vector<int>> &grid) {
    memset(dp, -1, sizeof(dp));
    return helper(0, 0, c-1, r, c,grid);
}
