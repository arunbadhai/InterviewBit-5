vector<int> Solution::plusOne(vector<int> &A) {
    int c = 0, k;
    int x = A.size();
    
    c = (A[x-1]+1)/10;
    A[x-1] = (A[x-1] + 1)%10;
    int d = c;
    for(int i = x-2; i >= 0; i--){
        c = (A[i] + d)/10;
        A[i] = (A[i] + d)%10; 
        d = c;
    }
    vector <int> ans;
    if(c!=0)
        ans.push_back(c);
    else{
        for( k =0; k < x; k++)
            if(A[k] != 0)
                break;
    }
    for(int i = k; i < x; i++)
        ans.push_back(A[i]);
    return ans;
    
}
