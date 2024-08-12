#include <stdio.h>
#include <math.h>

long long uocLN(long long n){
	long long res =0;
	for (int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			res =i;
			while (n%i==0){
				n/=i;
			}
		}
	}
	if(n!=1){
		res = n;
	}
	return res;
}
int main(){
	int t;
	scanf ("%d", &t);
	while (t--){
		long long n;
		scanf ("%lld", &n);
		printf ("%lld\n", uocLN(n));
	}
}
