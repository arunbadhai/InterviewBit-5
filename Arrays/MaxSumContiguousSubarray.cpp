int Solution::maxSubArray(const vector<int> &A) {
    int curr_max = A[0];
    int max_so_far = A[0];
    int x = A.size();
    for(int i = 1; i < x; i++){
        curr_max = max(curr_max+A[i], A[i]);
        max_so_far = max(max_so_far, curr_max);
    }
    return max_so_far;
}
