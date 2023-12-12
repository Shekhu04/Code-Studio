#include <bits/stdc++.h>
using namespace std;

//Find maximum element in the array
int findMax(vector<int> &v)
{
    int maxi = INT_MIN;
    int n = v.size();
    //find the maximum
    for(int i = 0; i<n; i++){
        maxi = max(maxi,v[i]);
    }
    return maxi;   
}

//Finding total hours to eat banana
int calculateTotalHours(vector<int>&v, int hourly){
    int totalH = 0;
    int n = v.size();
    //Find total hours
    for(int i = 0; i<n; i++){
     totalH += (v[i] + hourly - 1) / hourly;;
    }
    return totalH;
}

int minimumRateToEatBananas(vector<int> v, int h) {
    // Write Your Code Here
    int low = 1, high = findMax(v);

    //Applying binary search
    while(low <= high){
        int mid = low + (high-low)/2;
        int totalH = calculateTotalHours(v, mid);
        if(totalH <= h){
            high = mid-1;
        }
        else low = mid+1;
    }
    return low;
}
