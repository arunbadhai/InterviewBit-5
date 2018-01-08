vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int x = A[0].size();
    int n = 2 * (x-1);
    vector<vector<int> > ans(n+1);
    for(int d = 0; d <= n; d++){
        for(int i = 0; i <= d; i++){
            int j = d - i;
            if( i >= x || j >= x)
                continue;
            ans[d].push_back(A[i][j]);
        }
    }
    return ans;
}
