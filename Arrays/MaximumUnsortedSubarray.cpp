vector<int> Solution::subUnsort(vector<int> &A) {
    int n = A.size();
    
    int s = -1,e = -1;
    for(int i = 0; i < n-1; i++){
        if(A[i] > A[i+1]){
            s = i;
            break;
        }
    }
    for(int i = n-2; i >= 0; i--){
        if(A[i] > A[i+1]){
            e = i+1;
            break;
        }
    }
   // cout << s << " " << e<< "\n";    
    int max = *max_element(A.begin()+s, A.begin()+e+1);
    int min = *min_element(A.begin()+s, A.begin()+e+1);
    for(int i =0; i<s; i++){
        if(A[i] > min){
            s = i;
            break;
        }
    }
    for(int i =n-1; i > e; i--){
        if(A[i] < max){
            e = i;
            break;
        }
    }
   // cout << max<< " " << min << "\n";
    vector<int> ans;
    if(e == -1){
     ans.push_back(-1);
     return ans;
    }
    
    ans.push_back(s);
    ans.push_back(e);
    return ans;
}
