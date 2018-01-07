int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int min_steps = 0;
    for(int i = 1; i < A.size(); i++){
        min_steps += max(abs(A[i] - A[i-1]), abs(B[i] - B[i-1]) );
        //cout << min_steps << " ";
    }
    return min_steps;
}
