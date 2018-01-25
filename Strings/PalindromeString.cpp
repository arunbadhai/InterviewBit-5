int Solution::isPalindrome(string A) {
    int x = A.size();
    string a="";
    for(int i =0; i < x; i++){
        if( A[i]<48 || (A[i] > 57 && A[i] < 65) || (A[i] > 90 && A[i] < 97) || A[i]> 122 )
            continue;
        if(A[i] >= 65 && A[i] <= 90)
            A[i] = A[i] + 32;
        a += A[i];
    }
    string b = a;
    reverse(a.begin(), a.end());
    if(a.compare(b) == 0)
        return 1;
    else
        return 0;
}
