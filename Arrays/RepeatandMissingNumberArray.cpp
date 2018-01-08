vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long x = A.size();
    
    long long sum = 0;
    long long sum_of_squares = 0, actual_sum_of_squares = 0, actual_sum = (x*(x+1))/2;
    
    for(long long i = 0; i < x; i++){
        //the long long conversion here is important.
        sum_of_squares += (long long)A[i] * (long long)A[i];
        actual_sum_of_squares += (i+1) * (i+1);
        sum += A[i];
    }
  //  cout << actual_sum << " " << sum << "\n";
    long long B_A = (actual_sum - sum);
    long long B2_A2 = (actual_sum_of_squares - sum_of_squares);
    long long eq2 = B2_A2/(B_A);
    long long b = ((eq2) + (B_A))/2;
    long long a = ((eq2) - (B_A))/2;
    vector <int> ans;
    ans.push_back((int)a);
    ans.push_back((int)b);
    return ans;
}
