int Solution::sqrt(int A) {
    if(A == 0 || A == 1)
        return A;
    long long start=1;
    long long end = A;
    long long mid, ans;
    while(start<=end){
        mid = (start+end)/2;
        if(mid*mid == A)
            return mid;
        else if(mid*mid < A){
            ans = mid;
            start = mid+1;
        }
        else
            end = mid-1;
    }
    return ans;
    }
