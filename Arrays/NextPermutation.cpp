void Solution::nextPermutation(vector<int> &A) {
    int n = A.size();
    
    int x = -1;
    for(int i =n-1; i > 0; i--){
        if(A[i] > A[i-1]){
            x = i-1;
            break;
        }   
    }
    if(x == -1){
        sort(A.begin(), A.end());
        return;
    }
         
    int local_just_next, global_just_next = x+1;
    for(int i =x+1; i < n; i++){
        if(A[i] > A[x])
            local_just_next = i;
        if(A[global_just_next] > A[local_just_next])
            global_just_next = i;
    }
   // cout << A[global_just_next] << " " << A[x];
    swap(A[x], A[global_just_next]);
   // cout << A[global_just_next] << " " << A[x];
    reverse(A.begin()+x+1, A.end());
   
    }
