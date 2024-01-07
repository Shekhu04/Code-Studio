string longestPrefixSuffix(string &str){
    // Write your code here.
      int n = str.size();
    vector<int> lps(n, 0);
    int i=1, j=0;
    while(i<n){
        if(str[i] == str[j]){
            lps[i] = j+1;
            i++; j++;
        }
        else{
            if(j!=0) j = lps[j-1];
            else     i++;
        }
    }

    return (lps.back()==0? "" : str.substr(0, lps.back()));
}
