long long fact(long long n ){
    if(n==0) return 1;
    return n*fact(n-1);
}

vector<long long> factorialNumbers(long long n) {
    // Write Your Code Here
    long long x =1;
    while(fact(x) <= n && x<20) {
        cout << fact(x) <<" ";
        x++;
    }
    return{};
}
