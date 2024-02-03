#include<bits/stdc++.h>

using namespace std;

int longestSubSeg(vector<int> &arr , int n, int k){

    int right = 0;

    int left = 0;

    int ans = INT_MIN;

    int zeroCnt = 0;

    

    while(right < n){

        if(arr[right] == 0) zeroCnt++;

        while (zeroCnt > k) {

          if (arr[left] == 0) 

            zeroCnt--;

          

          left++;

        }

        ans = max(ans, right-left+1);

        right++;

    }

    return ans;

}
