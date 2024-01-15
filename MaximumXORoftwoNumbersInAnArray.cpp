#include<bits/stdc++.h>

int maximumXor(vector<int> A)

{

    int maxi=INT_MIN;

    int n=A.size();

    int i=0;

    while(i<n)

    {

        int ele=A[i];

        for(int j=i+1;j<n;j++)

        {

            int xorrr=ele^A[j];

            maxi=max(maxi,xorrr);

        }

        i++;

    }

    if(maxi<0) 

    {

        return 0;

    }

    return maxi;

}
