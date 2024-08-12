#include <stdio.h>
#include <math.h>
int kt (int n){
	if(n==0 || n==1 )return 0;
	for (int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
}

int main(){
	int t;
	scanf ("%d", &t);
	while (t--){
		int n;
		scanf ("%d", &n);
		int a[n];
		int dem =0;
		for (int i=0;i<n;i++){
			scanf ("%d", &a[i]);
		}
		for (int i=0;i<n;i++){
			if (kt(a[i])){
				dem ++;
				printf ("%d ", a[i]);
			}
		}
		if (dem ==0 ){
			printf ("-1");
		}
		printf ("\n");
	}
}
