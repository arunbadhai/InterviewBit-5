int Solution::titleToNumber(string A) {
    int x = A.size();
    int exp=0;
    int col = 0;
    for(int i=x-1; i>=0; i--){
        col += (int(A[i])-64)*pow(26,exp);
        exp++;
    }
    return col;
}
