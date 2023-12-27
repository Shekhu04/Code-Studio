vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    int m = b.size();
    for(int i=0; i<m; i++){
        a.push_back(b[i]);
    }
    sort(a.begin(), a.end());
    int n = a.size();
    vector<int> :: iterator ip;
    ip = std :: unique(a.begin(),a.begin()+n);

    a.resize(std::distance(a.begin(), ip));

    return a;
}
