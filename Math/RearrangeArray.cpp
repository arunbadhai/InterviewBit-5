void Solution::arrange(vector<int> &A) {
    int x = A.size();
    for(int i=0; i< x; i++)
        A[i] = A[i] + (A[A[i]]%x)*x;
    for(int i=0; i< x; i++)
        A[i] = A[i]/x;
    }
