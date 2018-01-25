string Solution::countAndSay(int A) {
    if(A == 1)
        return "1";
    if(A == 2)
        return "11";
    string prev = "11";
    string ans ="";
    int count = 1;
    for(int i=3; i<=A; i++){
        char con = prev[0];
        ans = "";
        int j;
        for(j=1; j < prev.length(); j++){
            if(con != prev[j]){
                string n = to_string(count);
                ans = ans + n + prev[j-1];
                con = prev[j];
                count = 1;
            }
            else
                count++;
        }
        string n = to_string(count);
        ans = ans + n + prev[j-1];
        count = 1;
        prev = ans;
    }
    return ans;
}
