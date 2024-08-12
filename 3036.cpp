#include <stdio.h>
int tn(long long n){
	long long m=n;
	long long x=0;
	while (m>0){
		x = x*10 + m%10;
		m/=10;
	}
	if (x==n) return 1;
	return 0;
}
int check(long long n){
	while (n>0){
		long long s = n %10;
		if (s%2==0){
			return 0;
			break;
		}
		n/=10;
	}
	return 1;
}
int check1(long long n){
	int sum = 0;
	while (n>0){
		sum += n%10;
		n/=10;
	}
	if (sum %2==0) return 0;
	return 1;
}
int main(){
	int t;
	scanf ("%d", &t);
	while (t--){
		long long n;
		scanf ("%lld", &n);
		if (tn(n) && check(n) && check1(n)) printf ("YES\n");
		else printf ("NO\n");
		
	}
}

