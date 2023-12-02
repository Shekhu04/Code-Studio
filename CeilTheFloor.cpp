int floors(vector<int>&a,int n,int x){
	int low = 0, high = n-1;
	int ans = -1;

	while(low <= high) {
		int mid = low + (high-low)/2;
		if(a[mid] <= x){
			ans = a[mid];
			low = mid+1;
		}
		else{
			high = mid-1;
		}
	}
	return ans;
}

int ceils(vector<int>&a,int n, int x) {
	int low = 0, high = n-1;
	int ans = -1;

	while(low <= high) {
		int mid = low + (high-low)/2;
		if(a[mid] >= x){
			ans = a[mid];
			high = mid-1;
		}
		else{
			low = mid+1;
		}
	}
	return ans;
}

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	int floor = floors(a,n,x);
	int ceil = ceils(a,n,x);
	return {floor,ceil};
}
