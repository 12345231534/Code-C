#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b){
	int *x = (int*)a;
	int *y = (int*)b;
	if(*x> *y) return -1;
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int n;
		scanf("%d", &n);
		long long a[n];
		for (int i=0;i<n;i++){
			scanf("%lld", &a[i]);
		}
		qsort(a, n, sizeof(a[0]), cmp);
		int ok =0;
		for (int i=0;i<n-2;i++){
			long long x = a[i] * a[i];
			int l =i+1, r = n-1;
			while (l<r){
				long long kc = a[l] *a[l] + a[r]* a[r];
				if(x == kc){
					ok = 1;
					break;
				}
				else if(x < kc){
					l++;
				}
				else if(x > kc){
					r--;
				}
			}
			if(ok ==1){
				break;
			}
		}
		if(ok==1){
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
}
