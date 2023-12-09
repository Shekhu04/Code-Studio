int findPeakElement(vector<int> &arr) {
    // Write your code here
    int n = arr.size();

    /*Brute Force Approach
    for(int i=0; i<=n; i++) {
      if((i==0 || arr[i] > arr[i-1])
                   && (i==n-1 || arr[i] > arr[i+1]))
                   return i;
    }*/
     
    //optimal approach using binary search
    //edge cases
    if (n==1) return 0; //single element in array
    if(arr[0] > arr[1]) return 0; //first element is the peak element
    if(arr[n-1] > arr[n-2]) return n-1; //last element is the peak

    int low=0,high=n-1;

    while(low <= high) {
        int mid = low + (high-low)/2;

        //if arr[mid] is the peak
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) return mid;

        //if we are on the left
        if(arr[mid] < arr[mid+1]) 
            //eliminate left half 
            low = mid+1;

        //if we are on the right 
        //Or mid is the common point
        else 
           //eliminate right half
           high = mid-1;    

    }
}
