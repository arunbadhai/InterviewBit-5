int seive(long i){
    if(i == 1)
		return 0;
	if(i == 2)
		return 1;
	if(i % 2 == 0)
		return 0;
	for(long k = 3; k*k <= i; k+=2){
		if(i%k == 0)			
			return 0;
		}
	return 1;
}
vector<int> Solution::primesum(int A) {
    
    vector<int> ans;
    for(long long i=0; i < A; i++){
        if(seive(i) && seive(A-i)){
                    ans.push_back((int)i);
                    ans.push_back((int)(A-i));
                    return ans;
        }
    }
 
}
