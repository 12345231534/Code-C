#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b){
	int *x = (int*)a;
	int *y = (int*)b;
	return *x-*y;
}
int cmp2(const void *a, const void *b){
	int *x = (int*)a;
	int *y = (int*)b;
	return *y-*x;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n, m;
		
		char kt;
		scanf ("%d %d %c", &n,&m, &kt);
		int a[n], b[m];
		for (int i=0;i<n;i++){
			scanf ("%d", &a[i]);
		}
		for (int i=0;i<m;i++){
			scanf ("%d", &b[i]);
		}
		int res[n+m];
		for (int i=0;i<n;i++){
			res[i] = a[i];
		}
		for (int i=n;i<m+n;i++){
			res[i]= b[i-n];
		}
		
		if(kt == 'T'){
			qsort(res,n+m,sizeof(int), cmp);
			for (int i=0;i<m+n;i++){
				printf ("%d ", res[i]);
			}
		}
		if(kt == 'G'){
			qsort(res,n+m,sizeof(int), cmp2);
			for (int i=0;i<m+n;i++){
				printf ("%d ", res[i]);
			}
		}
		if(kt == 'F'){
			
			for (int i=0;i<n;i++){
				printf("%d ", a[i]);
			}
			for (int i=0;i<m;i++){
				printf("%d ", b[i]);
			}
		}
		if(kt == 'A'){
			for (int i=0;i<m;i++){
				printf("%d ", b[i]);
			}
			for (int i=0;i<n;i++){
				printf("%d ", a[i]);
			}
		}
		printf ("\n");
	}
}
