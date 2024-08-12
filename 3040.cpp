#include <stdio.h>
#include <math.h>

int tong(int n){
	int sum =0;
	while (n>0){
		sum += n%10;
		n/=10;
	}
	return sum;
}
int pt(int n){
	int sum =0;
	for (int i=2; i<=sqrt(n); i++){
		while (n%i==0){
			sum += tong(i);
			n/=i;
		}
	}
	if (n!=1) {
		sum = sum +tong(n);
	}
	return sum;
}

int main(){
	int n;
	scanf ("%d", &n);
	int x = pt(n);
	int y = tong(n);
	if (x==y) printf ("YES\n");
	else printf ("NO\n");
	return 0;
}
