vector<int> search(string s, string pattern) {
    // Write Your Code Here
     int n = s.size();

    int m = pattern.size();

    vector<int> ans;

    for(int i = 0; i <= n-m ; i++){

        int flag = 0;

        for(int j = 0 ; j < m ; j++){

            if(s[i+j] == pattern[j]){

                continue;

            }

            else{

                flag = 1;

                break;

            }

        }

        if(flag == 0){

            ans.push_back(i+1); // 1-based indexing

        }

    }

    return ans;
}
