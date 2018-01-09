int Solution::reverse(int A) {
    long long num = 0;
    int flag =0;
    if(A<0){
        flag = 1;
        A = -1*A;
    }
    while(A>0){
        num = num*10 + (A%10);
        A = A/10;
    }
    if(num > INT_MAX)
        return 0;
    if(flag)
        return num*-1;

    return num;
}
