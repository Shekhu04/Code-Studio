int missingK(vector < int > vec, int n, int k) {
    // Write your code here.
    /*Brute Force Approach
    for (int i = 0; i < n; i++) {
        if (vec[i] <= k) k++; //shifting k
        else break;
    }
    return k;*/

    /*optimal approach*/
    int low = 0, high = n-1;
    while (low <= high){
        int mid = (low+high)/2;
        int missing = vec[mid]-(mid+1);
        if(missing < k) low = mid +1;
        else high = mid-1;
    }
    return high+1+k;  //or low+k
}
