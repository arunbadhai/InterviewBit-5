int Solution::strStr(const string A, const string B) {
    int x = A.length();
    int y = B.length();
    int ans = -1;
    for(int i = 0; i <= x - y; i++){
        if(A[i] == B[0]){
            if(A.substr(i, y) == B){
                ans = i;
                break;
            }
        }
    }
    return ans;
}
