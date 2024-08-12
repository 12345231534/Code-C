#include <stdio.h>
long long ucln(long long a, long long b){
	while (a*b !=0){
		if (a>b) {
			a %=b;
		}
		else b%=a;
	}
	return a+b;
}

int main(){
	long long a, b;
	scanf ("%lld %lld", &a, &b);
	long long s = ucln(a,b);
	long long x = a*b/s;
	printf ("%lld\n", s);
	printf ("%lld", x);
}
