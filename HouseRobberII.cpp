#include <bits/stdc++.h> 

long long f(int idx,vector<long long>&dp,vector<long long>& nums){

        if(idx==0){

            return nums[idx];

        }

        if(idx<0){

            return 0;

        }

        if(dp[idx]!=-1){

            return dp[idx];

        }

        long long notPick=0+f(idx-1,dp,nums);

        long long pick=nums[idx];

        if(idx>1){

            pick+=f(idx-2,dp,nums);

        }

        return dp[idx]=max(pick,notPick);

    }

long long houseRobber(vector<int>& valueInHouse)

{

    // Write your code here.

    long long n=valueInHouse.size();

        if(n==1){

            return valueInHouse[0];

        }

        vector<long long>first;

        for(int i=0;i<n-1;i++){

            first.push_back(valueInHouse[i]);

        }

        long long m=first.size();

        vector<long long>dp1(m,-1);

        long long ans1=f(m-1,dp1,first);

        vector<long long>second;

        for(int i=1;i<n;i++){

            second.push_back(valueInHouse[i]);

        }

        long long t=second.size();

        vector<long long>dp2(t,-1);

        long long ans2=f(t-1,dp2,second);

        return max(ans1,ans2);

}
