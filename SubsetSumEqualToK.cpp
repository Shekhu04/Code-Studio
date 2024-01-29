#include <bits/stdc++.h> 

bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<bool> ans(k + 1, false);
    ans[0] = true;
    for(int i = 0; i < n; ++i){
        for(int j = k; j >= arr[i]; --j){
            ans[j] = ans[j] || ans[j - arr[i]];
            if(ans[k]) return true;
        }
    }
    return ans[k];
}
