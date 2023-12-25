vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    rotate(arr.begin(),arr.begin()+k,arr.end());
    return arr;
}
