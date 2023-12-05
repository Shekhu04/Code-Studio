void print (vector<int>&ans,int x,int n){
    if(x>n) return;
    ans.push_back(x);
    print(ans,x+1,n);
}

vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int>ans;
    print(ans,1,x);
    return ans;
}
