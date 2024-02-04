bool isSafe(int node, vector<vector<int>> &mat, int color[], int n, int col){

 

    for(int k=0; k<n; k++){

 

        if(k != node && mat[k][node] == 1 && color[k] == col) return false;

 

    }

 

    return true;

 

}

 

bool solve(int node, vector<vector<int>> &mat, int color[], int m, int n){

 

    if(node == n){

        return true;

    }

 

    for(int i=1; i<=m; i++){

 

        if(isSafe(node, mat, color, n, i)){

            color[node] = i;

            if(solve(node+1, mat, color, m, n)) return true;

            color[node] = 0; // Backtracking

        }

 

    }

 

    return false;

 

}

 

string graphColoring(vector<vector<int>> &mat, int m) {

    

    int n = mat.size();

    int color[n] = {0};

    if(solve(0, mat, color, m, n)) return "YES";

    return "NO";

 

}
