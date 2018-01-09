
int Solution::gcd(int A, int B) {
    int temp;
    while(A != 0){
        temp = B;
        B = A;
        A = temp%A;
    }
    return B;
}
