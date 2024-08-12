#include <stdio.h>
#include <math.h>

long long uoc(long long n){
	long long max =0;
	for (int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			max =i;
			while (n%i==0){
				n/=i;
			}
		}
	}
	if(n!=1){
		max =n;
	}
	return max;
}

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		long long n;
		scanf ("%lld", &n);
		long long a = uoc(n);
		printf ("%lld\n", a);
	}
}
