int fn(int a,int n){
    int s=0;
    while(n--){
        s+=a;
        if(n) s*=10;
    }
    return s;
}
int SumA(int a,int n){
	int s;
	while(n--){
		s+=fn(a,n+1);
	}
	return s;
}
