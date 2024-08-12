#include <stdio.h>
int check1(int n){
	if (n%2==0) return 1;
	return 0;
}
int check2(long long n){
	while (n>0){
		int s = n%10;
		if (s%2 == 1) return 0;
		n/=10;
	}
	return 1;
	
}
int main(){
	int n;
	scanf ("%d", &n);
	while (n--){
		long long t;
		scanf ("%lld", &t);
		if (check1(t) && check2(t)) printf ("YES\n");
		else printf ("NO\n");
		
	}
}
