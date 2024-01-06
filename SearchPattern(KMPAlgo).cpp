vector<int> stringMatch(string text, string pattern) {
	// Write your code here.
	  int ind = -1;

    int n = pattern.size(); 

    vector<int> v;

    for(int i=0;i<text.size();i++){

        if(text[i]==pattern[0]){

            ind = i;

            int flag = 0;

            string str = text.substr(i,n);

            if(str == pattern){

                v.push_back(i+1);

            }

        }

    }

    return v;
}
