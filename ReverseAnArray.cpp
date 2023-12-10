vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
    for(int i=0;i<n/2;i++){
        swap(nums[i],nums[n-1-i]);
    }
    return nums;
}
