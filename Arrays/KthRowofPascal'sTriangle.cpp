vector<int> Solution::getRow(int A) {
    int c = 1;
    vector <int> a;
    for(int i = 1; i <= A+1; i++){
        a.push_back(c);
        c = (c * (A - i + 1))/i; 
    }
    return a;
}
