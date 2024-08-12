#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b){
	int *x = (int*)a;
	int *y = (int*)b;
	return *x-*y;
}
int min(int a,int b){
	if (a<b) return a;
	return b;
}
int main(){
	int n,m;
	scanf ("%d%d", &n,&m);
	int a[n], b[m];
	for (int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for (int i=0;i<m;i++){
		scanf("%d", &b[i]);
	}
	qsort(a,n,sizeof(int), cmp);
	qsort(b,m,sizeof(int), cmp);
	int uniqueA[n],uniqueB[m];
	int newN =0, newM=0;
	uniqueA[newN++] = a[0];
	uniqueB[newM++] = b[0];
	
	for (int i=1;i<n;i++){
		if(a[i] != a[i-1]){
			uniqueA[newN++] = a[i];
		}
	}
	for (int i=1;i<m;i++){
		if(b[i] != b[i-1]){
			uniqueB[newM++] = b[i];
		}
	}
	int giao[min(newN,newM)];
	int c=0;
	for (int i=0;i<newN;i++){
		for (int j=0;j<newM;j++){
			if(uniqueA[i] == uniqueB[j]){
				giao[c] = uniqueA[i];
				c++;
			}
		}
	}

	qsort(giao,c,sizeof(int), cmp);
	for (int i=0;i<c;i++){
		if (giao[i] !=0)
		printf("%d ", giao[i]);
	}
	
	printf("\n");
	for (int i=0;i<newN;i++){
		int oke =1;
		for (int j=0;j<c;j++){
			if(uniqueA[i] ==giao[j]){
				oke =0;
			}
		}
		if(oke) {
			printf("%d ", uniqueA[i]);
		}
	}
	printf("\n");
	
	for (int i=0;i<newM;i++){
		int oke =1;
		for (int j=0;j<c;j++){
			if(uniqueB[i] ==giao[j]){
				oke =0;
			}
		}
		if(oke) {
			printf("%d ", uniqueB[i]);
		}
	}
}
