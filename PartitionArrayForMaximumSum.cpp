#include<bits/stdc++.h>

 

int recursion(int idx, int k, int n, vector<int> &arr, vector<int> &dp){

    if(idx == n){

        return 0;

    }

    if(dp[idx] != -1){

        return dp[idx];

    }

 

    int len = 0;

    int maxVal = INT_MIN;

    int maxSum = INT_MIN;

    

    for(int j=idx; j<min(idx+k, n); j++){

        len++;

        maxVal = max(maxVal, arr[j]);

 

        int sum = maxVal*len + recursion(j+1, k, n, arr, dp);

 

        maxSum = max(sum, maxSum);

    }

 

    return dp[idx] = maxSum;

}

 

int maximumSubarray(vector<int> &arr, int k){

    int n = arr.size();

    vector<int> dp(n, -1);

    return recursion(0, k, n, arr, dp);

}
