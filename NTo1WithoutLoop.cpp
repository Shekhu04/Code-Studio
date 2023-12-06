vector<int> printNos(int x) {
    // Write Your Code Here
    if(x<=0) return{};

    cout << x << " ";
    return printNos(x-1);
}
