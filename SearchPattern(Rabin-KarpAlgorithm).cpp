vector<int> stringMatch(string text, string pattern) {

	  if (pattern.empty()) {

        return vector<int>();

    }
    vector<int> occurences;

    int indices = text.find(pattern, 0);

    while(indices != string::npos) {

        occurences.push_back(indices+1);

        indices = text.find(pattern, indices+1);

    }

    return occurences;
}
