bool isPal(string &s, int i, int j) {
    while(i<j) {
        if(s[i++] != s[j--]) return 0;
    }
    return 1;
}
int f(int ind, int n, string &s, vector<int> dp) {
    if(ind==n) return 0;
    if(dp[ind] != -1) return dp[ind];
    int ans=1e9;
    for(int i=ind;i<n;i++) {
        if(isPal(s, ind, i)) {
            ans=min(ans, 1+f(i+1, n, s, dp));
        }
    }
    return dp[ind] = ans;
}
int palindromePartitioning(string s) {
    int n=s.size();
    vector<int> dp(n+1, -1);
    return f(0, n, s, dp)-1;
}
