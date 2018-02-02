int value(char c){
    if(c == 'I')
        return 1;
    if(c == 'V')
        return 5;
    if(c == 'X')
        return 10;
    if(c == 'L')
        return 50;
    if(c == 'C')
        return 100;
    if(c == 'D')
        return 500;
    if(c == 'M')
        return 1000;
}
int Solution::romanToInt(string A) {
    int ans = 0;
    int x = A.length();
    for(int i =0; i < x; i++){
        int s1 = value(A[i]);
        if(i+1 < x){
        int s2 = value(A[i+1]);
        if(s1 >= s2){
            ans += s1;
        }
        else
            ans -= s1;
        }
        else
            ans += s1;
    }
    return ans;
}
