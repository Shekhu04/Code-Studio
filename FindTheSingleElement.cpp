#include <bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr){
	int low = 0;
	int high = arr.size()-1;

	while(low<high){
		int mid = low + (high-low)/2;

		if(mid%2 == 0){
			if(arr[mid] == arr[mid+1]){
				low = mid+2;
			}else{
				high = mid;
			}
		}else{
			if(arr[mid] == arr[mid-1]){
				low =  mid+1;
			}else{
				high = mid;
			}
		}
	}
	return arr[low];
}
