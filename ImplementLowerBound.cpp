int lowerBound(vector<int> arr, int n, int x) {
	int low = 0, high = n-1;
	int ans = n;

	while(low <= high) {
		int mid = low + (high-low)/2;

		//May be an answer
		if(arr[mid] >= x){
			ans = mid;
			high = mid-1; //go to left part
		}
		else low = mid+1;
	}
	return ans;
}
