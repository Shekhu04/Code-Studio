int findMin(vector<int>& arr)
{
	// Write your code here.
	int low = 0, high = arr.size()-1;
    int ans = INT_MAX;
	while(low <= high){
		int mid = low + (high-low)/2;

		/*if search space is already sorted then 
		arr[low] will always be minimum in that search space*/

		if(arr[low] <=  arr[high]){
			ans = min(ans,arr[low]);
			break;
		}

		//if left part is sorted
		if(arr[low] <= arr[mid]) {
			
			//keep the minimum
			ans = min(ans,arr[low]);

			//eliminate left half
			low = mid+1;
		}

		//if right part is sorted
		else {
			ans = min(ans,arr[mid]);

			//eliminate right half
			high = mid-1;
		}
	}
	return ans;
}
