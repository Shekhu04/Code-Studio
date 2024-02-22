#include <bits/stdc++.h> 

int getMaxPathSum(vector<vector<int>> &ma)

{

    int n=ma.size();

    int m=ma[0].size();

    vector<vector<int>>dp(n,vector<int>(m,0));

    for(int i=0;i<m;i++) dp[0][i]=ma[0][i];

    for(int i=1;i<n;i++){

        for(int j=0;j<m;j++){

            dp[i][j]=dp[i-1][j];

            if(j-1>=0) dp[i][j]=max(dp[i][j],dp[i-1][j-1]);

            if(j+1<m) dp[i][j]=max(dp[i][j],dp[i-1][j+1]);

            dp[i][j]+=ma[i][j];

        }

    }

    int ans=-1e9;

    for(int i=0;i<m;i++) ans=max(ans,dp[n-1][i]);

    return ans;

}
