int Solution::solve(vector<int> &A) {
    int n = A.size();
    sort(A.begin(), A.end(), greater<int>());
    if(A[0] == 0)
            return 1;
    int k = A[0];
    //k is determining a change in the repeated values.
    for(int i = 1; i < n; i++){
        if(k > A[i]){
            k = A[i];
            if(i == k)
                return 1;
        }
    }
    return -1;
}
