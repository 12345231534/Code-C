#include <stdio.h>
int check(long long n){
	int chan =0, le = 0;
	while (n>0){
		int s= n%10;
		if (s%2==0) chan++;
		else le++;
		n/=10;
	}
	if(chan >le) return 0;
	return 1;
}
int check1(long long n){
	if (n%2==0) return 0;
	return 1;
}
int main(){
	int t;
	scanf ("%d", &t);
	while (t--){
		long long n;
		scanf ("%lld", &n);
		if (check(n) && check1(n)) printf ("YES\n");
		else printf ("NO\n");
	}
}
