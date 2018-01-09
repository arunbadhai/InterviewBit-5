string Solution::convertToTitle(int A) {
    string ans = "";
    vector<int> rem;
    while(A > 0){
        rem.push_back((A-1)%26);
        A = (A-1)/26;
    }
    int x = rem.size();
    for(int i=x-1; i >= 0;i--){
            ans += rem[i] + 'A';
    }
    return ans;
}
