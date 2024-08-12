#include <stdio.h>
#include <math.h>

long long tong_thua_so(int n){
	long long sum = 0;
	int j;
	while(n % 2 == 0){
		sum += 2;
		n /= 2;
	}
	for(j = 3; j <= sqrt(n); j += 2){
			while(n%j == 0){
				sum += j;
				n /= j;
			}
		}
	if(n > 2) {
		sum += n;
	}
	return sum;
}
int main(){
	int n;
	scanf ("%d", &n);
	int a[n];
	
	long long sum =0;
	while (n--){
		int x;
		scanf ("%d", &x);
		sum += tong_thua_so(x);
	}
	printf ("%lld", sum);
}

