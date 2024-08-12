#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b){
	int *x = (int*)a;
	int *y = (int*)b;
	if(*x<*y) return -1;
	return 1;
}
int main(){
	int t;
	scanf ("%d", &t);
	while (t--){
		int n;
		scanf ("%d", &n);
		int a[n];
		for (int i=0;i<n;i++){
			scanf ("%d", &a[i]);
		}
		int min_val =1e9;
		qsort(a, n, sizeof(a[0]),cmp);

		int cnt =0;
		for (int i=1;i<n;i++){
			int x = a[i]-a[i-1];
			if(x < min_val){
				min_val = x;
				cnt =1;
			}
			else if(x == min_val){
				cnt++;
			}
		}
		
		printf("%d %d\n", min_val, cnt);
	}
}

