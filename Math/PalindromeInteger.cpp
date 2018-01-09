int Solution::isPalindrome(int A) {
    string s = to_string(A);
    string k = to_string(A);
    reverse(s.begin(), s.end());
    if(k.compare(s) == 0)
        return 1;
    return 0;
}
