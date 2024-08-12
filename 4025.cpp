#include <stdio.h>
#include <stdlib.h>

// -1 va 1
// a dung truoc b tra ve -1
// a dung sau b tra ve 1
int cmp(const void *a, const void *b){
	int *x = (int*)a;
	int *y = (int*)b;
	if(*x < *y){
		return -1;
	}
	else return 1;
}

int main(){
	int n;
	scanf ("%d", &n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	qsort(a,n,sizeof(int),cmp);
	for (int i=0;i<n;i++){
		if(a[i] %2==0){
			printf ("%d ", a[i]);
		}
	}
	for (int i=0;i<n;i++){
		if(a[i] %2!=0){
			printf ("%d ", a[i]);
		}
	}
}
