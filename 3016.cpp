#include <stdio.h>

int fibo(long long n){
	if (n==1 || n==0) return 1;
	long long a[93];
	a[1] = 1;
	a[0] = 0;
	for (int i =2;i<92;i++){
		a[i] = a[i-1] + a[i-2];
		if(a[i] == n) {
			return 1;
		}	
	}
	return 0;
}
int main(){
	int t;
	scanf ("%d", &t);
	while (t--){
		long long n;
		scanf ("%lld", &n);
		if(fibo(n)) {
			printf ("YES\n");
		}
		else {
			printf ("NO\n");
		}
	}
}

