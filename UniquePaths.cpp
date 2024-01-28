#include <bits/stdc++.h> 

//Tabular Approach for this problem

int uniquePaths(int m, int n) {

    // Write your code here.

    int AakritStorekro[m][n]={0};

    for(int i =0;i<m;i++)

    {

        for(int j =0;j<n;j++)

        {

            if(i==0||j==0)

            {

                AakritStorekro[i][j]=1;

            }

            else

            {

                AakritStorekro[i][j]=AakritStorekro[i-1][j]+AakritStorekro[i][j-1];

            }

        }

    }

    return AakritStorekro[m-1][n-1];

}
