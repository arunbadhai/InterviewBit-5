int Solution::maximumGap(const vector<int> &A) {
    int n = A.size();
    int lmin[n];
    int rmax[n];
    lmin[0] = A[0];
    for(int i =1; i < n; i++)
        lmin[i] = min(lmin[i-1], A[i]);
    
    rmax[n-1] = A[n-1];
    for(int i = n-2; i >= 0; i--)
        rmax[i] = max(rmax[i+1], A[i]);
    
    int i=0, j = 0, maxdiff = -1;
    while(i<n && j<n){
        if(lmin[i] <= rmax[j]){
            maxdiff = max(maxdiff, j-i);
            j++;
        }
        else
            i++;
    }
    return maxdiff;
}
