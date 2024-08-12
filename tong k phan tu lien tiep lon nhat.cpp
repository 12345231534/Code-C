#include <stdio.h>
int main(){
	int n;
	int k;
	
	scanf ("%d %d", &n, &k);
	int a[n];
	for (int i=0;i<n;i++){
		scanf ("%d", &a[i]);
	}
	long long res = -1e9;
	int idx =0;
	for (int i=0;i<=n-k;i++){
		int sum = 0;
		for (int j=0;j<k;j++){
			sum += a[i+j];
		}
		if (sum >=res) {
			res = sum;
			idx = i;
		}
	}
	printf ("%d\n", res);
	for (int i=0;i<k;i++){
		printf ("%d ", a[i+idx]);
	}
}
