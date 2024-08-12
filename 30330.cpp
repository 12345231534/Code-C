#include <stdio.h>
#include <math.h>

void  phanTich(int n){
	for (int i=2;i<=sqrt(n);i++){
		int dem =0;
		if(n%i ==0){
			
			while (n%i==0){
				dem ++;
				n/=i;
			}
			printf ("%d^%d", i ,dem);
			if(n!=1 ) printf(" * ");
		}
	}
	if(n>1){
		printf ("%d^1", n);
	}
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int n;
		scanf ("%d", &n);
		phanTich(n);
		printf("\n");
	}
}
