#include <stdio.h>
#include <math.h>

int pt(int n){
	int tich =1;
	for (int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			tich *= i;
			while (n%i==0){
				n/=i;
			}
		}
	}
	if (n!=1){
		tich *=n;
	}
	return tich;
}

int main(){
	int t;
	scanf ("%d", &t);
	while (t--){
		int n;
		scanf("%d", &n);
		printf("%d\n", pt(n));
	}
}
