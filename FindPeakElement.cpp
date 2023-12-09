int findPeakElement(vector<int> &arr) {
    // Write your code here
    int n = arr.size();

    //Brute Force Approach
    for(int i=0; i<=n; i++) {
      if((i==0 || arr[i] > arr[i-1])
                   && (i==n-1 || arr[i] > arr[i+1]))
                   return i;
    }
}
