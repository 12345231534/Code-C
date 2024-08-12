#include <stdio.h>
int ucln(int a, int b){
	if(a==0 || b==0){
		return a+b;
	}
	while (a !=b){
		if(a>b){
			a-= b;
		}
		else {
			b-= a;
		}
	}
	return a;
}
long long bcnn(int a, int b){
	long long x = (long long)a*b/ucln(a,b);
	return x;
}
int main(){
	int t;
	scanf ("%d", &t);
	while (t--){
		long long a,b;
		scanf ("%lld %lld", &a ,&b);
		long long x = ucln(a,b);
		long long y = bcnn(a,b);
		printf ("%lld %lld", y, x);
		printf ("\n");
	}
	
}

