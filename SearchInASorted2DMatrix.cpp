int binarySearch(vector<int>&nums, int target){
    int n = nums.size();
    int low=0, high =  n-1;

    while(low <= high){
        int mid = (low+high)/2;
        if(nums[mid] == target) return true;
        else if (target > nums[mid]) low = mid+1;
        else high = mid-1;
    }
    return false;
}

bool searchElement(vector<vector<int>> &MATRIX, int target) {
    int n = MATRIX.size(); //size of row
    int m = MATRIX[0].size(); //size of col;
    int row = 0, col= m-1;

    //traverse the matrix from index (0,m-1)
    while(row < n && col >= 0) {
        if(MATRIX[row][col] == target) return true;
        else if (MATRIX[row][col] < target) row++;
        else col--;
    }
    return false;

    
    /*BFA
    //traverse the matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(MATRIX[i][j] == target) return true;
        }
    }
     return false;*/
    
    /*Better Approach
    for(int i=0; i<n; i++){
        bool flag = binarySearch(MATRIX[i],target);
        if (flag) return true;
    }
    return false;*/
    




}
