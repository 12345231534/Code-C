#include<stdio.h>
#include <math.h>
int prime[1000001];
int sieve(){
	for (int i=0;i<=1000000;i++){
		prime[i] =1;
	}
	prime[0] = prime[1] = 0;
	for (int i=2; i<=1000;i++){
		if(prime[i]){
			for (int j=i*i; j<=1000000;j+=i){
				prime[j] = 0;
			}
		}
	}
}
int main (){
	int t;
	scanf ("%d", &t);
	while (t--){
	sieve();
	int n;
	scanf ("%d", &n);
	for (int i=0;i<n;i++){
		scanf ("%d ", &i);
	}
	for (int i=0; i<=n;i++){
		if (prime[i]){
			printf ("%d ", i);
		}
	}
	printf ("\n");

}
return 0;
}
