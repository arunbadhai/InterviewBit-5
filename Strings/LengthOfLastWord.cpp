int Solution::lengthOfLastWord(const string A) {
    int x = A.length();
    int count = 0;
    for(int i = x-1; i >= 0; i--){
        if(A[i] == ' ' && count == 0)
            continue;
        if(A[i] == ' ' && count != 0)
            break;
        count++;
    }
    return count;
}
