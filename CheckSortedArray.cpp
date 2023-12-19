int isSorted(int n, vector<int> a) {
    // Write your code here.
    /*BFA
    for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[j] < a[i])
        return false;
    }
  }

  return true;*/
  /*Optimal Approach*/
   for (int i = 1; i < n; i++) {
    if (a[i] < a[i - 1])
      return false;
  }

  return true;
}
