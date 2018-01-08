vector<vector<int> > Solution::generate(int A) {
    
    int i, line;
    vector<vector<int> > a(A);
    int c = 1;
    for( line = 1; line <= A; line++){
        c = 1;
        //line = line-1, since 0 based indexing in pascal tree.
        for( i = 1; i <= line; i++){
            a[line-1].push_back(c);
            c = (c *(line - i)) / i;
        }
    }
    return a;
}
