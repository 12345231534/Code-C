#include <stdio.h>
#define  ll long long
long long fibo(int n){
	long long fn1 = 0;
	long long fn2 =1;
	if (n==1){
		return 0;
	}
	if (n==2){
		return 1;
	}
	long long fn;
	for (int i=2;i<=n;i++){
		fn  = fn1+fn2;
		fn1 =fn2;
		fn2 = fn;
	}
	return fn;
}

int main(){
	int t;
	scanf ("%d", &t);
	while (t--){
		int n;
		scanf ("%d", &n);
		printf ("%lld\n", fibo(n));
	}
}
