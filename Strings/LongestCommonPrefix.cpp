bool common_all(vector<string> A, int low, int mid){
    int x = A.size();
    for(int i=1; i<x; i++)
        for(int j=low; j<=mid; j++)
            if(A[0][j] != A[i][j])
                return false;
    return true;
}

string Solution::longestCommonPrefix(vector<string> &A) {
    int min = INT_MAX;
    string ans;
    int x = A.size();
    for(int i=0; i<x; i++){
        if(A[i].size() < min)
            min = A[i].size();
    }
   // cout << min << "\n";
    int low = 0, high = min-1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(common_all(A, low, mid)){
            ans += A[0].substr(low, mid-low+1);
            low = mid +1;
        }
        else
            high = mid-1;
    }
    return ans;
}
