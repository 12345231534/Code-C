#include <stdio.h>
#include <stdlib.h>


int cmp1(const  void *a, const void *b){
	return *(int*)a - *(int*)b;
}
int cmp2(const void *a, const void *b){
	return *(int*)b - *(int*)a;
}
int main(){
	int n;
	scanf ("%d", &n);
	int a[n],b[n];
	for (int i=0;i<n;i++){
		scanf ("%d ", &a[i]);
	}
	for (int i=0;i<n;i++){
		scanf ("%d", &b[i]);
	}
	qsort(a,n, sizeof(int), cmp1);
	qsort(b,n, sizeof (int), cmp2);
	for (int i=0;i<n;i++){
		printf ("%d %d ", a[i], b[i]);
	}
	
}
