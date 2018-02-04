int Solution::atoi(const string A) {
    int x = A.length();
    int start = 0;
    for(int i = 0; i < x; i++){
        if(A[i] != ' '){
            start = i;
            break;
        }
    }
    int sign = 1;
    if(A[start] == '-'){
        sign = -1;
        start++;
    }
    if(A[start] == '+'){
        sign = 1;
        start++;
    }
    long long ans = 0;
    for(int i = start; i < x; i++){
        if(A[i] >= '0' && A[i] <= '9'){
            ans = (ans * 10) + (A[i] - '0');
            if(sign * ans > INT_MAX)
                return sign * INT_MAX;
            if(sign * ans < INT_MIN)
                return INT_MIN;
        }
        else
            break;
    }
    return sign * ans;
}
