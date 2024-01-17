int countPalindromicSubsequences(string &str)

{

    int n=str.size();

    const int mod=1e9+7;

        vector<vector<long long int>> dp(n,vector<long long int>(n,0));

        for(int g=0;g<n;++g){

            for(int i=0 , j=g ; j<n; ++i , ++j){

                if(g==0)

                    dp[i][j]=1;

                else if(g==1){

                    if(str[i]==str[j])

                        dp[i][j]=3;

                    else 

                        dp[i][j]=2;

                }

                else{

                    if(str[i]==str[j]){

                        dp[i][j]=(dp[i+1][j]+dp[i][j-1]+1)%mod;

                    }

                    else{ 

                        dp[i][j]=(dp[i+1][j]+dp[i][j-1]-dp[i+1][j-1])%mod;

                    }

                }

            }

        }

        return (dp[0][n-1]+mod)%mod;

}
