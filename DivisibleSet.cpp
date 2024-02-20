#include <bits/stdc++.h> 

vector<int> divisibleSet(vector<int> &nums){

     int n=nums.size();

        vector<int>dp(n,1),v(n);

        sort(nums.begin(),nums.end());

        int ans=1,x=0;

        for(int i=1;i<n;i++){

            v[i]=i;

            for(int j=0;j<i;j++){

                if(nums[i]%nums[j]==0 && dp[i]<1+dp[j]){

                    dp[i]=1+dp[j];

                    v[i]=j;

                }

            }

            if(ans<dp[i]){

                ans=dp[i];

                x=i;

            }

        }

        vector<int>w;

        w.push_back(nums[x]);

        while(v[x]!=x){

            x=v[x];

            w.push_back(nums[x]);

        }

        reverse(w.begin(),w.end());

        return w;

}
