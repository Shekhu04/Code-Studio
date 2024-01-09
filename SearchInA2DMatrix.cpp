/*bool binarySearch(vector<int>&nums, int target){
    int n = nums.size();
    int low=0, high = n-1;

    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid] == target) return true;
        else if(target > nums[mid]) low=mid+1;
        else high = mid-1;
    }
    return false;
}
*/



bool searchMatrix(vector<vector<int>>& mat, int target) {
    
      int n = mat.size(); //size of row
      int m = mat[0].size(); //size of column

     /*Brute Force Approach
      //traverse the matrix
      for(int i=0; i<n; i++){
          for(int j=0; j<m; j++){
              if(mat[i][j] == target) return true;
          }
      } 
      return false; */
    
    /*Better Approach
    for(int i=0; i<n; i++){
        if(mat[i][0] <= target && target <= mat[i][m-1])
            return binarySearch(mat[i], target);
    }
    return false;*/

    //optimal approach
    int low = 0,high = n*m-1;
    while(low <= high) {
        int mid = (low + high)/2;
        int row = mid/m, col = mid%m;
        if(mat[row][col] == target) return true;
        else if(mat[row][col] < target) low = mid+1;
        else high = mid-1;
    }
    return false;

}
