void fun(int n ,vector<string>&arr){
	if(n>0){
		fun(n-1,arr);
		arr.push_back("Coding Ninjas");
	}
}

vector<string> printNTimes(int n) {
	// Write your code here.
	vector<string>Arr;
	fun(n,Arr);
	return Arr;
}
