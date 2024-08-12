#include <stdio.h>
#include <stdlib.h>

int tang(const void *a, const void *b){
	int *x = (int*)a;
	int *y = (int*)b;
	return *x-*y;
}
int giam(const void *a, const void *b){
	int *x = (int*)a;
	int *y = (int*)b;
	return *y-*x;
}
int main(){
	int t;
	scanf ("%d", &t);
	for(int x=1;x<=t;x++){
		int n;
		scanf ("%d", &n);
		int a[n], b[n];
		for (int i=0;i<n;i++){
			scanf ("%d", &a[i]);
		}
		for (int i=0;i<n;i++){
			scanf ("%d", &b[i]);
		}
		qsort(a,n,sizeof(int), tang);
		qsort(b,n,sizeof(int), giam);
		printf ("Test %d:\n",x);;
		for (int i=0;i<n;i++){
			printf ("%d ", a[i]);
			printf ("%d ", b[i]);
			
		}
		printf ("\n");
	}
}
