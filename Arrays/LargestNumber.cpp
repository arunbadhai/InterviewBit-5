bool mycomp(string X, string Y){
    string XY = X.append(Y);
    string YX = Y.append(X);
    if(XY > YX)
        return 1;
    else
        return 0;
}
string Solution::largestNumber(const vector<int> &A) {
    int n = A.size();
    vector<string> s;
    for(int i = 0; i < n ; i++)
        s.push_back(to_string(A[i]));
    sort(s.begin(), s.end(), mycomp);
    string ans;
    for(int i = 0; i < n ; i++)
        ans += s[i];
        
    if(ans[0] == '0')
        return "0";
    return ans;
}
