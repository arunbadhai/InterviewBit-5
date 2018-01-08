void Solution::setZeroes(vector<vector<int> > &A) {
    int m = A.size();
    int n = A[0].size();
   // cout << m << " " << n << "\n";
   int row[m];
   int col[n];
   memset(row, 0, sizeof(row));
   memset(col, 0, sizeof(col));
    for(int i =0; i < m; i++){
        for(int j=0; j < n; j++){
            if(A[i][j] == 0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for(int i =0; i < m; i++){
        for(int j=0; j < n; j++){
            if(row[i] == 1 || col[j] == 1)
                A[i][j] = 0;
        }
    }
}
