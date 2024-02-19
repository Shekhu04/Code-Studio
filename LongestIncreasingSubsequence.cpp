#include<bits/stdc++.h>

int longestIncreasingSubsequence(int arr[], int n){
    vector<int> v;
    for (int i = 0; i < n; ++i) {
        auto item = arr[i];
        if (v.empty() || v.back() < item) v.emplace_back(item);
        else {
            auto it = lower_bound(v.begin(), v.end(), item);
            *it = item;
        }
    }
    return v.size();
}
