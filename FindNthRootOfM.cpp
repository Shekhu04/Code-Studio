int floorSqrt(int n)
{
    // Write your code here.
    /*Brute Force Approach
    int ans = 0;
    //linear seearch in answer space
    for(long long i =0; i<=n; i++){
          long long val = i*i;
          if(val <= n*1ll) ans = i;
          else break;
    }
    return ans; */

    /*Optimal Approach 1
    int ans = sqrt(n);
    return ans;*/

    //optimal Approach 2
    int low=1, high = n;
    //Binary search on the answers
    while(low<=high){
        long long mid = low + (high-low)/2;
        long long val = mid*mid;

        if(val <= (long long)(n)){
            //eliminate the left half
            low = mid +1;
        }
        else {
            //eliminat right half
            high = mid-1;
        }
    }
    return high;
}
