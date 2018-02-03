string Solution::intToRoman(int A) {
    string ans;
    string u[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
    string t[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    string h[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string th[] = {"","M","MM","MMM"};
    ans += th[(int)(A/1000)%10];
    ans += h[(int)(A/100)%10];
    ans += t[(int)(A/10)%10];
    ans += u[A%10];
    return ans;
}
