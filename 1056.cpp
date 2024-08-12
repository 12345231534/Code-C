#include <stdio.h>

int check(long long n){
	while (n>0){
		int a = n%10;
		n/=10;
		int b = n%10;
		if (b>a){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	scanf ("%d", &t);
	while (t--){
		long long n;
		scanf ("%lld", &n);
		if(check(n)){
			printf ("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
}
