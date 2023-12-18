bool canWePlace(vector<int> &stalls, int dist, int cows){
    int n = stalls.size(); //size of array
    int cntCows = 1; //no. of cows placed
    int last = stalls[0]; //position of last placed cow
    for(int i=1; i<n; i++){
        if(stalls[i] - last >= dist){
            cntCows++; //place next cow
            last = stalls[i]; //update the last location
        }
        if(cntCows >= cows) return true;
    }
    return false;
}


int aggressiveCows(vector<int> &stalls, int k)
{
    /*Brute Force Approach
    int n = stalls.size();
    //sort the stalls[]
    sort(stalls.begin(), stalls.end());

    int limit = stalls[n-1] - stalls[0];
    for(int i = 1; i<= limit; i++){
        if(canWePlace(stalls, i, k) == false) {
            return (i-1);
        }
    }
    return limit;*/

    /*optimal approach*/
    int n = stalls.size();
    sort(stalls.begin(),stalls.end());

    int low = 0, high = stalls[n-1] - stalls[0];

    //apply binary search
    while(low <= high){
        int mid = (low+high)/2;
        if(canWePlace(stalls,mid,k) == true){
            low =  mid+1;
            //ans = mid;
        }
        else high = mid-1;
    }
    return high; //ans


    
}
