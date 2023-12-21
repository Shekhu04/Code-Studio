vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.
    vector<int> f;
    int s;
    for(int x:a){
        if(x!=0){
            f.push_back(x);
        }
    }
    while(a.size() > f.size()){
        f.push_back(0);
    }
    return f;
}
