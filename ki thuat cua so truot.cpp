#include <stdio.h>
int main(){
	int n,k;
	scanf ("%d %d", &n, &k);
	int a[n];
	for (int i=0;i<n;i++){
		scanf ("%d", &a[i]);
	}
	int res =0, idx =0, sum=0;
	for (int i=0;i<k;i++){
		sum += a[i];// cua so dau tien
	}
	res = sum;
	for (int i=1;i<=n-k;i++){
		sum = sum - a[i-1] + a[i+k-1];// cua so tiep theo
		if (sum >=res){//in ra vi tri cuoi cung
			res = sum;
			idx = i;// luu vi tri 
		}
	}
	printf ("%d\n", res);
	for (int i=0;i<k;i++){
		printf ("%d ", a[i+idx]);// in ra cac phan tu trong day con
	}
}
