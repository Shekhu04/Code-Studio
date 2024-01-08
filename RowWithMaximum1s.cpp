int rowWithMax1s(vector<vector<int>> &matrix, int n, int m) {

 

    for (int i = 0 ; i< m ; i++)

    {

        for(int k=0 ; k < m; k++){

            if(matrix[k][i] == 1) return k; 

        }

    }

 

    return -1;

}
