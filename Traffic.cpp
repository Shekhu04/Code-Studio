int traffic(int n, int m, vector<int> vehicle) {
	// Write your code here.
	int flip = 0;
  int ans = 0;
  int i = 0;
  int j = 0;

  while(i<n){
    if(vehicle[i] == 0){
      flip++;
    }
    while(flip>m){
      if(vehicle[j] == 0){
        flip--;
      }
      j++;
    }
    ans = max(ans,i-j+1);
    i++;
  }
  return ans;
}
