#include <stdio.h>
#include <math.h>

int prime[1000006];

void  sang(){
	for (int i=0;i<=1000000;i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for (int i=2;i<=sqrt(1000000);i++){
		if (prime[i]){
			for(int j=i*i;j<=1000000;j+=i){
				prime[j]= 0;
			}
		}
	}
}
int main(){
	int t;
	scanf ("%d", &t);
	sang();
	while(t--){
		long long a,b;
		int s = 0;
		scanf ("%lld ", &a);
		scanf ("%lld", &b);
		int c1 = (int)sqrt(a);
		int c2 =(int)(sqrt(b));
		
		if (c1*c1 != a){
			c1+=1;
		}
		for (int i = c1; i<=c2; i++){
			if(prime[i]){
				s++;
			}
		}
		printf ("%d\n", s);
	}
}
