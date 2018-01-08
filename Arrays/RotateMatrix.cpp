void Solution::rotate(vector<vector<int> > &A) {
    int n = A[0].size();
    //since we have floor n/2 cycles in n*n matrix
    for(int i =0; i < n/2; i++){
        for(int j = i; j< n-1-i; j++){
            int temp = A[i][j];
            A[i][j] = A[n-1-j][i];
            A[n-1-j][i] = A[n-1-i][n-1-j];
            A[n-1-i][n-1-j] = A[j][n-1-i];
            A[j][n-1-i] = temp;
        }
    }
}
