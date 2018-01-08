vector<int> Solution::findPerm(const string A, int B) {
    vector<int> a;
    for(int i = 1; i <= B; i++)
        a.push_back(i);
    int i =0, j=0;
    while(i < B-1){
        j = i;
        while(i < B-1 && A[i] == 'D'){
            i++;
        }
        reverse(a.begin()+j, a.begin()+i+1);
        i++;
    }
    return a;
}
