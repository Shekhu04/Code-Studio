const int mod = 1000000007;

int evaluateExp(string & exp) {
    // Write your code here.
    int n = exp.size();
    vector<vector<vector<long long>>> dp(n, vector<vector<long long>>(n, vector<long long>(2, 0)));

    // return f(0,n-1, 1, exp, dp);
    for(int i=n-1; i>=0; i--) {
        for(int j=0; j<n; j++) {
            if(i>j) continue;
            for(int isTrue=0; isTrue<=1; isTrue++) {
                if (i == j) {
                    if (isTrue == 1) dp[i][j][isTrue] = exp[i] == 'T';
                    else dp[i][j][isTrue] = exp[i] == 'F';
                    continue;
                }

                long long ways = 0;
                for(int k=i; k<j; k++) {
                    long long leftTrue = dp[i][k-1][1];
                    long long leftFalse = dp[i][k-1][0];
                    long long rightTrue = dp[k+1][j][1];
                    long long rightFalse = dp[k+1][j][0];

                    if(exp[k] == '&') {
                        if(isTrue) ways = (ways + (leftTrue*rightTrue)%mod)%mod;
                        else ways = (ways + (leftFalse*rightTrue)%mod + (leftFalse*rightFalse)%mod + (leftTrue*rightFalse)%mod)%mod;
                    }
                    else if(exp[k] == '|') {
                        if(isTrue) ways = (ways + (leftTrue*rightTrue)%mod + (leftTrue*rightFalse)%mod + (leftFalse*rightTrue)%mod)%mod;
                        else ways = (ways + (leftFalse*rightFalse)%mod)%mod;
                    }
                    else {
                        if(isTrue) ways = (ways + (leftTrue*rightFalse)%mod + (leftFalse*rightTrue)%mod)%mod;
                        else ways = (ways + (leftTrue*rightTrue)%mod + (leftFalse*rightFalse)%mod)%mod;
                    }
                }

                dp[i][j][isTrue] = ways;
            }
        }
    }

    return dp[0][n-1][1];
}
