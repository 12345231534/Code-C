#include <stdio.h>
#include <math.h>
int nto(int n){
	for (int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int max (int a, int b){
	if (a>b) return a;
	return b;
}
int main(){
	int n;
	scanf ("%d", &n);
	int a[n][n];
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	int pos ;
	int max1= -1e9;
	for (int i=0;i<n;i++){
		int dem =0;
		for (int j=0;j<n;j++){
			if(nto(a[i][j])){
				dem++;
			}
		}
		if(dem > max1){
			max1 = dem;
			pos =i;
		}
	}
	printf("%d\n", pos+1);
	for (int i=0;i<n;i++){
		if(nto(a[pos][i])){
			printf("%d ", a[pos][i]);
		}
	}
}
