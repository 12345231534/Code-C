#include <stdio.h>
int prime[1000000];

int  sang(){
	for (int i=0;i<1000000;i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for (int i=2;i<=1000;i++){
		if (prime[i]){
			for(int j=i*i;j<1000000;j+=i){
				prime[j]= 0;
			}
		}
	}
}
int main (){
	sang();
	int n;
	scanf ("%d", &n);
	for (int i=0;i<=n;i++){
		if (prime[i]){
			printf ("%d\n", i);
		}
	}
}
