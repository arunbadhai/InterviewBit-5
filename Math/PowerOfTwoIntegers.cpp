int Solution::isPower(int A) {
    if(A==1)
        return 1;
    for(int i =2; i < A; i++){
        int num = i;
        int exp = 2;
        while(num <= A && exp <=32){
            num *= i;
            if(num==A)
                return 1;
            exp++;
        }
    }
    return 0;
}
