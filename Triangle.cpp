#include <bits/stdc++.h> 

int minimumPathSum(vector<vector<int>>& triangle, int n){

    vector<int>prev(n,0);

    for(int j=0;j<n;j++)

    prev[j] = triangle[n-1][j];

    for(int i=n-2;i>=0;i--)

    {  

        vector<int>cur(n,0);

        for(int j=i;j>=0;j--)

        {

            int down = triangle[i][j]+prev[j];

            int dg = triangle[i][j]+prev[j+1];

            cur[j] = min(down,dg);

        }

       prev = cur;

    }

    return prev[0];

}
